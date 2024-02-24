#ifndef CREATEUSER_H
#define CREATEUSER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class CreateUser;
}
QT_END_NAMESPACE

class CreateUser : public QMainWindow
{
    Q_OBJECT

public:
    CreateUser(QWidget *parent = nullptr);
    ~CreateUser();

private slots:
    void on_AdministradorDelSistema_pressed();

    void on_BackAdminSystem_pressed();

    //void on_pushButton_pressed();

    void on_CrearUser_pressed();

    void on_pushButton_2_pressed();

    void on_UserDown_pressed();

    void on_Expedientes_pressed();

    void on_pushButton_4_pressed();

    void on_CreateUserBT_pressed();

    void on_pushButton_3_pressed();

private:
    Ui::CreateUser *ui;
};
#endif // CREATEUSER_H
