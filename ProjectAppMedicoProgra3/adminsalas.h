#ifndef ADMINSALAS_H
#define ADMINSALAS_H

#include <string>
#include <QDate>

class adminsalas {
public:
    adminsalas(); // Constructor
    void addSala(std::string descripcion, std::string estatus, QDate fechaInicio, QDate fechaDisponibilidad);
    bool modificarSala(int codigo, std::string descripcion, std::string estatus, QDate fechaInicio, QDate fechaDisponibilidad);
    bool eliminarSala(int codigo);

private:
    int getSalaCode(long offset);
};

#endif // CTUNNES_H
