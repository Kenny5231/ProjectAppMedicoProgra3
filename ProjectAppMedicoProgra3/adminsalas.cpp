#include "adminsalas.h"
#include <fstream>
#include <iostream>
#include <QFile>
#include <QDataStream>
#include <QTextStream>
#include <stdlib.h>
#include <QDate>
#include <QDebug>

using namespace std;

struct Room {
    int code;
    QString description;
    QString status;
    QDate fechaInicio;
    QDate fechaDisponibilidad;
};

QFile salasArchivo("salas.mdc");
QDataStream writeSalas(&salasArchivo);
QDataStream readSalas(&salasArchivo);

adminsalas::adminsalas() {
    salasArchivo.open(QIODevice::ReadWrite);

    qint64 size = salasArchivo.size();
    if (size == 0) {
        int code_room  = 1;
        QDataStream writeS(&salasArchivo);
        writeS << code_room;
    }
}

int adminsalas::getSalaCode(long offset) {
    salasArchivo.seek(offset);
    int code_room;
    QDataStream readS(&salasArchivo);
    readS >> code_room;

    salasArchivo.seek(offset);
    int nextCode = code_room + 1;

    QDataStream writeS(&salasArchivo);
    writeS << nextCode;

    return code_room;
}

void adminsalas::addSala(string descripcion, string estatus, QDate fechaInicio, QDate fechaDisponibilidad) {
    Sala nuevaSala;
    salasArchivo.seek(salasArchivo.size());
    nuevaSala.codigo = getSalaCode(0);
    nuevaSala.descripcion = QString::fromStdString(descripcion);
    nuevaSala.estatus = QString::fromStdString(estatus);
    nuevaSala.fechaInicio = fechaInicio;
    nuevaSala.fechaDisponibilidad = fechaDisponibilidad;
    writeSalas << nuevaSala.codigo << nuevaSala.descripcion << nuevaSala.estatus << nuevaSala.fechaInicio << nuevaSala.fechaDisponibilidad;
}

bool adminsalas::modificarSala(int codigo, string descripcion, string estatus, QDate fechaInicio, QDate fechaDisponibilidad) {
    salasArchivo.seek(0);
    while (!salasArchivo.atEnd()) {
        qint64 pos = salasArchivo.pos();
        Sala sala;
        readSalas >> sala.codigo >> sala.descripcion >> sala.estatus >> sala.fechaInicio >> sala.fechaDisponibilidad;
        if (sala.codigo == codigo) {
            QDate hoy = QDate::currentDate();
            if (hoy < sala.fechaInicio || hoy > sala.fechaDisponibilidad) {
                return false;
            }
            sala.descripcion = QString::fromStdString(descripcion);
            sala.estatus = QString::fromStdString(estatus);
            sala.fechaInicio = fechaInicio;
            sala.fechaDisponibilidad = fechaDisponibilidad;
            salasArchivo.seek(pos);
            writeSalas << sala.codigo << sala.descripcion << sala.estatus << sala.fechaInicio << sala.fechaDisponibilidad;
            salasArchivo.flush();
            return true;
        }
    }
    return false;
}

bool adminsalas::eliminarSala(int codigo) {
    salasArchivo.seek(0);
    QFile tempFile("salas_temp.mdc");
    if (!tempFile.open(QIODevice::ReadWrite)) {
        return false;
    }

    QDataStream writeTemp(&tempFile);

    bool salaEncontrada = false;
    while (!salasArchivo.atEnd()) {
        Sala sala;
        readSalas >> sala.codigo >> sala.descripcion >> sala.estatus >> sala.fechaInicio >> sala.fechaDisponibilidad;
        if (sala.codigo != codigo) {
            writeTemp << sala.codigo << sala.descripcion << sala.estatus << sala.fechaInicio << sala.fechaDisponibilidad;
        } else {
            salaEncontrada = true;
        }
    }

    salasArchivo.close();
    tempFile.close();

    if (!salaEncontrada) {
        return false;
    }

    salasArchivo.remove();
    tempFile.rename("salas_temp.mdc");
    return true;
}
