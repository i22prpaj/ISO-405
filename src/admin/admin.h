#ifndef ADMIN_H
#define ADMIN_H
#include "usuario.h"

class Admin: public Usuario{
    private:
        
    public:
        Admin(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string contraseña): Usuario(dni, nombre, apellidos, sexo, edad, consulta, contraseña){
            
        }
};

#endif