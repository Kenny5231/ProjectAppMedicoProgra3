#include "createuser.h"
#include "ui_createuser.h"
#include "classcreateuser.h"
#include "adminexpedientes.h"
#include "adminsalas.h"
#include "recetas.h"
#include <QMessageBox>>
ClassCreateUser createuser;
AdminExpedientes Expedientes;
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


void CreateUser::on_pushButton_pressed()
{
    ui->stackedWidget->setCurrentIndex(11);
}


void CreateUser::on_pushButton_6_pressed()
{
    ui->stackedWidget->setCurrentIndex(12);
}


void CreateUser::on_pushButton_7_pressed()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void CreateUser::on_new_prescription_btn_pressed()
{
   //poner fecha actual
    QDateEdit date_actual;
    QDate currentDate = QDate::currentDate();
    date_actual.setDate(currentDate);
    date_actual.show();

    //poner a los pacientes
    QComboBox patients_data;
    QFile file("expedientes.itn");
    if (!file.open(QIODevice::ReadOnly)) {
        return 1;
    }
    QDataStream read(&file);
    QString paciente;
    while (!read.atEnd()) {
        read >> paciente;
        patients_data.addItem(paciente);
    }
    file.close();
    patients_data.show();


}

