#include "createuser.h"
#include "ui_createuser.h"

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


void CreateUser::on_pushButton_pressed()
{
     ui->stackedWidget->setCurrentIndex (1) ;
}


void CreateUser::on_CrearUser_pressed()
{
     ui->stackedWidget->setCurrentIndex (2) ;
}


void CreateUser::on_pushButton_2_pressed()
{
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
