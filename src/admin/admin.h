#ifndef ADMIN_H
#define ADMIN_H
#include "usuario.h"

class Admin: public Usuario{
    private:
        
    public:
<<<<<<< HEAD
<<<<<<< HEAD
        Admin(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string nombre_usuario, std::string contrasena): Usuario(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena){}
=======
        Admin(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta): Usuario(dni, nombre, apellidos, sexo, edad, consulta){
=======
        Admin(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string contraseña): Usuario(dni, nombre, apellidos, sexo, edad, consulta, contraseña){
>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
            
        }
>>>>>>> f453b58 (	deleted:    build/CMakeFiles/Progress/1)
};

#endif