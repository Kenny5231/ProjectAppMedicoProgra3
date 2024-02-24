#define ADMINEXPEDIENTES_H

#include <QString>
#include <QFile>
#include <QDataStream>

extern QFile ExpedientesAdmin;
extern QDataStream writeandwrite;

class AdminExpedientes
{
    struct NewExpediente
    {
        //datos creados por asistente
        QString Encabezado ="";
        QString NombrePaciente="";
        QString identidad=0;
        QString FechaNacimiento="";
        QString numero1=0;
        QString mail1="";
        QString AdiconalContact="";
        QString AdiocionalPhone=0;
        QString Adicionalmail="";
        QString tipoSangre="";
        QString Alegias="";
        QString enfermedadesBase="";
        //Datos creados por doctor
        QString FechaCita="";
        QString Sintomas="";
        QString Observaciones="";
        QString diagnostico="";
        QString Recomendaciones="";
        QString newCita="";
        QString adicionalComents="";
    };
public:
    AdminExpedientes();
    bool createexpediente(QString encabezado,QString nombrePaciente,QString Identidad,QString fechaNacimiento,QString Numero1,QString Mail1,QString adiconalContact,QString adiocionalPhone,QString adicionalmail,QString alegias,QString TipoSangre,QString EnfermedadesBase);
    bool addToExpedientes(QString IdentidadPasiente,QString FechaCita,QString Sintomas,QString Observaciones,QString diagnostico,QString Recomendaciones,QString newCita,QString adicionalComents);
};

