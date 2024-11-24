#ifndef ADMIN_H
#define ADMIN_H
#include "usuario.h"

class Admin: public Usuario{
    private:
        
    public:
        Admin(): Usuario(dni, nombre, apellidos, Sexo, edad, consulta){
            
        }
};