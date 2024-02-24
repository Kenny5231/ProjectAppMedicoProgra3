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

bool AdminExpedientes::createexpediente(QString encabezado, QString nombrePaciente, QString Identidad, QString fechaNacimiento, QString Numero1, QString Mail1, QString adiconalContact, QString adiocionalPhone, QString adicionalmail, QString alegias, QString TipoSangre, QString EnfermedadesBase)
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
    Expedientes.FechaCita="No definida";
    Expedientes.Sintomas="No definido";
    Expedientes.Observaciones="No definida";
    Expedientes.diagnostico="No definido";
    Expedientes.Recomendaciones="No definidas";
    Expedientes.newCita="No definida";
    Expedientes.adicionalComents="No definido";
    ExpedientesAdmin.seek(ExpedientesAdmin.size());
    write << Expedientes.Encabezado << Expedientes.NombrePaciente << Expedientes.identidad << Expedientes.FechaNacimiento << Expedientes.numero1 << Expedientes.mail1 << Expedientes.AdiconalContact << Expedientes.AdiocionalPhone << Expedientes.Adicionalmail<< Expedientes.tipoSangre << Expedientes.Alegias << Expedientes.enfermedadesBase << Expedientes.FechaCita << Expedientes.Sintomas << Expedientes.Observaciones << Expedientes.diagnostico << Expedientes.Recomendaciones << Expedientes.newCita << Expedientes.adicionalComents;
    ExpedientesAdmin.flush();
    return true;
}


bool AdminExpedientes::addToExpedientes(QString IdentidadPasiente,QString FechaCita, QString Sintomas, QString Observaciones, QString diagnostico, QString Recomendaciones, QString newCita, QString adicionalComents)
{
    ExpedientesAdmin.seek(0);
    long size=0;
    NewExpediente Expedientes;
    Expedientes.Encabezado;
    Expedientes.NombrePaciente;
    Expedientes.identidad;
    Expedientes.FechaNacimiento;
    Expedientes.numero1;
    Expedientes.mail1;
    Expedientes.AdiconalContact;
    Expedientes.AdiocionalPhone;
    Expedientes.Adicionalmail;
    Expedientes.tipoSangre;
    Expedientes.Alegias;
    Expedientes.enfermedadesBase;
    //No se cambiaran
    Expedientes.FechaCita=FechaCita;
    Expedientes.Sintomas=Sintomas;
    Expedientes.Observaciones=Observaciones;
    Expedientes.diagnostico=diagnostico;
    Expedientes.Recomendaciones=Recomendaciones;//
    Expedientes.newCita=newCita;
    Expedientes.adicionalComents=adicionalComents;
    while(!ExpedientesAdmin.atEnd()){
        size= ExpedientesAdmin.pos();
        write >> Expedientes.Encabezado >> Expedientes.NombrePaciente >> Expedientes.identidad >> Expedientes.FechaNacimiento >> Expedientes.numero1 >> Expedientes.mail1 >> Expedientes.AdiconalContact >> Expedientes.AdiocionalPhone >> Expedientes.Adicionalmail >> Expedientes.tipoSangre >> Expedientes.Alegias >> Expedientes.enfermedadesBase >> Expedientes.FechaCita >> Expedientes.Sintomas >> Expedientes.Observaciones >> Expedientes.diagnostico >> Expedientes.Recomendaciones >> Expedientes.newCita >> Expedientes.adicionalComents;
        if(Expedientes.identidad==IdentidadPasiente)
        {
            ExpedientesAdmin.seek(size);
            write << Expedientes.Encabezado << Expedientes.NombrePaciente << Expedientes.identidad << Expedientes.FechaNacimiento << Expedientes.numero1 << Expedientes.mail1 << Expedientes.AdiconalContact << Expedientes.AdiocionalPhone << Expedientes.Adicionalmail<< Expedientes.tipoSangre << Expedientes.Alegias << Expedientes.enfermedadesBase << FechaCita << Sintomas << Observaciones << diagnostico <<Recomendaciones << newCita << adicionalComents;
            ExpedientesAdmin.flush();
            return true;
        }
    }
    return false;
}
