#include "classcreateuser.h"
//para los archivos
#include <QFile>
#include <QDataStream>
#include <QDate>
#include <QTextStream>

QFile UserAdmin("/Users/Kenny/Documents/GitHub/ProjectAppMedicoProgra3/ProjectAppMedicoProgra3/User.itn");
QDataStream writeandwrite (&UserAdmin);

ClassCreateUser::ClassCreateUser() {
    UserAdmin.open(QIODevice::ReadWrite);
    if(!UserAdmin.isOpen()){
        exit(0);
    }
    //if(Codigo.size()==0){
       // code<<1;
        //Codigo.seek(Codigo.size());
      //  code<<1;
    //}

}

bool ClassCreateUser::CreateUserFun(QString nombre, QString password, QString cuenta, QString rol, bool status)
{
    CrearUserFormat create;

    create.nombre=nombre;
    create.password=password;
    create.cuenta=cuenta;
    create.rol=rol;
    create.status=status;
    UserAdmin.seek(UserAdmin.size());
    writeandwrite <<create.nombre<<create.password<<create.cuenta<<create.rol<<create.status;
    UserAdmin.flush();
    return true;
}

bool ClassCreateUser::EditUser(QString nombre, QString cuenta)
{
    long save=0;
    UserAdmin.seek(0);
    while(!UserAdmin.atEnd()){
        CrearUserFormat create;
        create.nombre=nombre;
        create.password="password";
        create.cuenta=cuenta;
        create.rol="rol";
        create.status=false;
        save = UserAdmin.pos();
        writeandwrite>>create.nombre>>create.password>>create.cuenta>>create.rol>>create.status;
        if(create.nombre==nombre && create.cuenta==cuenta)
        {
            UserAdmin.seek(save);
            writeandwrite <<create.nombre<<create.password<<create.cuenta<<create.rol<<create.status;
            return true;
        }
    }
    return false;
}
