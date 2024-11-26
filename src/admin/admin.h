#ifndef ADMIN_H
#define ADMIN_H
#include "usuario.h"

class Admin: public Usuario{
    private:
        
    public:
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        Admin(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string nombre_usuario, std::string contrasena): Usuario(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena){}
=======
        Admin(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta): Usuario(dni, nombre, apellidos, sexo, edad, consulta){
=======
        Admin(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string contraseña): Usuario(dni, nombre, apellidos, sexo, edad, consulta, contraseña){
>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
=======
        Admin(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string nombre_usuario, std::string contraseña): Usuario(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contraseña){
>>>>>>> ef80a67 (Co-authored-by: Alvaro394 <Alvaro394@users.noreply.github.com>)
=======
        Admin(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string nombre_usuario, std::string contrasena): Usuario(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena){
>>>>>>> 0338030 (Co-authored-by: Alvaro394 <Alvaro394@users.noreply.github.com>)
            
        }
>>>>>>> f453b58 (	deleted:    build/CMakeFiles/Progress/1)
=======
        Admin(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string nombre_usuario, std::string contrasena): Usuario(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena){}
>>>>>>> 0aa6d07 (	modified:   src/admin/admin.h)
};

#endif