#include "createuser.h"
#include "ui_createuser.h"
#include "classcreateuser.h"
#include <QMessageBox>>
ClassCreateUser createuser;
CreateUser::CreateUser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CreateUser)
{
    ui->setupUi(this);
}

CreateUser::~CreateUser()
{
    delete ui;
}

void CreateUser::on_AdministradorDelSistema_pressed()
{
     ui->stackedWidget->setCurrentIndex (1) ;
}


void CreateUser::on_BackAdminSystem_pressed()
{
     ui->stackedWidget->setCurrentIndex (0) ;
}




void CreateUser::on_CrearUser_pressed()
{
     ui->stackedWidget->setCurrentIndex (2) ;
}


void CreateUser::on_pushButton_2_pressed()
{
    QString NameUser = ui->NameUserEdit->text();
    QString CuentaUser = ui->CuentaUserEdit->text();
    if(createuser.EditUser(NameUser,CuentaUser))
    {
         QMessageBox::information(this, "Guardado", QString("Se guardó correctamente el estado a inactivo del User: "+NameUser));
    }else
    {
         QMessageBox::information(this, "Error!", QString("No se guardó correctamente el estado a inactivo del User: "+NameUser));
    }
    ui->stackedWidget->setCurrentIndex (1) ;
}


void CreateUser::on_UserDown_pressed()
{
    ui->stackedWidget->setCurrentIndex (3) ;
}


void CreateUser::on_Expedientes_pressed()
{
    ui->stackedWidget->setCurrentIndex (4) ;
}


void CreateUser::on_pushButton_4_pressed()
{
    ui->stackedWidget->setCurrentIndex (0);

}

void CreateUser::on_CreateUserBT_pressed()
{
    QString NameUser= ui->NameUserCreate->text();
    QString CuentaUser = ui->UserCuentaCreate->text();
    QString rol= ui->UserRolCreate->text();
    if(createuser.CreateUserFun(NameUser,"User",CuentaUser,rol,true))
    {
         QMessageBox::information(this, "Guardado", QString("Se guardó correctamente"));
    }else
    {
        QMessageBox::information(this, "Error", QString("No se guardó correctamente"));
    }
    ui->stackedWidget->setCurrentIndex (1);
}


void CreateUser::on_pushButton_3_pressed()
{

}

