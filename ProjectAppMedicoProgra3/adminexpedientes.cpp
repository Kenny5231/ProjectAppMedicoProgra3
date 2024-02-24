#include "adminexpedientes.h"
//para los archivos
#include <QFile>
#include <QDataStream>
#include <QDate>
#include <QTextStream>

QFile ExpedientesAdmin("/Users/Kenny/Documents/GitHub/ProjectAppMedicoProgra3/ProjectAppMedicoProgra3/Expedientes.itn");
QDataStream write (&ExpedientesAdmin);


AdminExpedientes::AdminExpedientes() {
    ExpedientesAdmin.open(QIODevice::ReadWrite);
    if(!ExpedientesAdmin.isOpen())
    {
        exit(0);
    }
}

bool AdminExpedientes::createexpediente(QString encabezado,QString nombrePaciente,long Identidad,QString fechaNacimiento,long Numero1,QString Mail1,QString adiconalContact,long adiocionalPhone,QString adicionalmail,QString alegias,QString TipoSangre,QString EnfermedadesBase)
{
    NewExpediente Expedientes;
    Expedientes.Encabezado = encabezado;
    Expedientes.NombrePaciente = nombrePaciente;
    Expedientes.identidad = Identidad;
    Expedientes.FechaNacimiento = fechaNacimiento;
    Expedientes.numero1 = Numero1;
    Expedientes.mail1 = Mail1;
    Expedientes.AdiconalContact = adiconalContact;
    Expedientes.AdiocionalPhone = adiocionalPhone;
    Expedientes.Adicionalmail = adicionalmail;
    Expedientes.tipoSangre = TipoSangre;
    Expedientes.Alegias = alegias;
    Expedientes.enfermedadesBase = EnfermedadesBase;
    //No se cambiaran
    Expedientes.FechaCita="";
    Expedientes.Sintomas="";
    Expedientes.Observaciones="";
    Expedientes.diagnostico="";
    Expedientes.Recomendaciones="";
    Expedientes.newCita="";
    Expedientes.adicionalComents="";
    ExpedientesAdmin.seek(ExpedientesAdmin.size());
    //writeandwrite<<Expedientes.Encabezado<<Expedientes.NombrePaciente<<Expedientes.identidad;
    return true;
}

bool AdminExpedientes::addToExpedientes(QString FechaCita, QString Sintomas, QString Observaciones, QString diagnostico, QString Recomendaciones, QString newCita, QString adicionalComents)
{
    return false;
}
