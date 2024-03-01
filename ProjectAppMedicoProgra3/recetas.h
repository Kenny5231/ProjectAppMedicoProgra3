#ifndef RECETAS_H
#define RECETAS_H

#include <QDate>
#include <QString>
#include <QList>

class recetas {
public:
    recetas();
    void agregarReceta(QString paciente, QList<QString> medicamentos, QList<QString> dosis);
    QList<Receta> buscarRecetasPorPaciente(QString paciente);
    QList<Receta> buscarRecetasPorFecha(QDate fecha);

private:
    struct Receta {
        QDate fecha;
        QString paciente;
        QList<QString> medicamentos;
        QList<QString> dosis;
    };
};

#endif
