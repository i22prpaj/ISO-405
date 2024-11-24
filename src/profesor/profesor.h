#ifndef PROFESOR_H
#define PROFESOR_H
#include "usuario.h"

class Profesor: public Usuario{
    private:
        std::vector<std::string>  universidad_;
        int cuatrimestre_, curso_;
    public:
<<<<<<< HEAD
<<<<<<< HEAD
        Profesor(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string nombre_usuario, std::string contrasena, std::vector<std::string> universidad): Usuario(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena){
=======
        Profesor(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::vector<std::string> universidad):Usuario(dni, nombre, apellidos, sexo, edad, consulta){
>>>>>>> f453b58 (	deleted:    build/CMakeFiles/Progress/1)
=======
        Profesor(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string contraseña, std::vector<std::string> universidad):Usuario(dni, nombre, apellidos, sexo, edad, consulta, contraseña){
>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
            universidad_ = universidad;
        }
        
        void SetUniversidad(std::vector<std::string> universidad){universidad_=universidad;}
        std::vector<std::string> GetUniversidad(){return universidad_;}
};

#endif