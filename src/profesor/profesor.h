#ifndef PROFESOR_H
#define PROFESOR_H
#include "usuario.h"

class Profesor: public Usuario{
    private:
        std::vector<std::string>  universidad_;
        int cuatrimestre_, curso_;
    public:
        Profesor(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string contraseña, std::vector<std::string> universidad):Usuario(dni, nombre, apellidos, sexo, edad, consulta, contraseña){
            universidad_ = universidad;
        }
        
        void SetUniversidad(std::vector<std::string> universidad){universidad_=universidad;}
        std::vector<std::string> GetUniversidad(){return universidad_;}
};

#endif