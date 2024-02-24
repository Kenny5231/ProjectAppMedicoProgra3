#ifndef CLASSCREATEUSER_H
#define CLASSCREATEUSER_H
//#include <string>
#include <QString>
// declarar string de la libreria standart
using namespace std;

class ClassCreateUser
{
    struct CrearUserFormat{
//nombre, cuenta, rol, status
        QString nombre="";
        QString password = "user";
        QString cuenta="";
        QString rol="";
        bool status=true;
    };
public:
    ClassCreateUser();
    bool CreateUserFun(QString nombre,QString password,QString cuenta,QString rol,bool status);
    bool EditUser(QString nombre,QString cuenta);
};

#endif // CLASSCREATEUSER_H
