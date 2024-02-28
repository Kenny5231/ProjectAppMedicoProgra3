#include "recetas.h"
#include <fstream>
#include <iostream>
#include <QFile>
#include <QDataStream>
#include <QTextStream>
#include <stdlib.h>
#include <QDate>
#include <QDebug>

using namespace std;

struct Receta {
    QDate fecha;
    QString paciente;
    QList<QString> medicamentos;
    QList<QString> dosis;
};

QFile expedientesArchivo("expendientes.itn");
QDataStream writeExpedientes(&expedientesArchivo);
QDataStream readExpedientes(&expedientesArchivo);

recetas::recetas() {
    expedientesArchivo.open(QIODevice::ReadWrite);
}

void recetas::agregarReceta(QString paciente, QList<QString> medicamentos, QList<QString> dosis) {
    Receta nuevaReceta;
    nuevaReceta.fecha = QDate::currentDate();
    nuevaReceta.paciente = paciente;
    nuevaReceta.medicamentos = medicamentos;
    nuevaReceta.dosis = dosis;

    writeExpedientes << nuevaReceta.fecha << nuevaReceta.paciente << nuevaReceta.medicamentos << nuevaReceta.dosis;
    expedientesArchivo.flush();
}

QList<Receta> recetas::buscarRecetasPorPaciente(QString paciente) {
    QList<Receta> recetasEncontradas;
    expedientesArchivo.seek(0);
    while (!expedientesArchivo.atEnd()) {
        Receta receta;
        readExpedientes >> receta.fecha >> receta.paciente >> receta.medicamentos >> receta.dosis;
        if (receta.paciente == paciente) {
            recetasEncontradas.append(receta);
        }
    }
    return recetasEncontradas;
}

QList<Receta> recetas::buscarRecetasPorFecha(QDate fecha) {
    QList<Receta> recetasEncontradas;
    expedientesArchivo.seek(0);
    while (!expedientesArchivo.atEnd()) {
        Receta receta;
        readExpedientes >> receta.fecha >> receta.paciente >> receta.medicamentos >> receta.dosis;
        if (receta.fecha == fecha) {
            recetasEncontradas.append(receta);
        }
    }
    return recetasEncontradas;
}
