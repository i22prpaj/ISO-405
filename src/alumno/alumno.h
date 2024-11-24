#ifndef ALUMNO_H
#define ALUMNO_H
#include "usuario.h"

class Alumno: public Usuario{

    private:
        std::string carrera_;
        std::vector<std::string> asignaturas_, universidad_;
        int cuatrimestre_, curso_, matricula_;

    public:
<<<<<<< HEAD
<<<<<<< HEAD
        Alumno(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string nombre_usuario, std::string contrasena, std::string carrera, std::vector<std::string> asignaturas, int cuatrimestre, int curso, int matricula, std::vector<std::string> universidad):Usuario(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena){
=======
        Alumno(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string carrera, std::vector<std::string> asignaturas, int cuatrimestre, int curso, int matricula, std::vector<std::string> universidad):Usuario(dni, nombre, apellidos, sexo, edad, consulta){
>>>>>>> f453b58 (	deleted:    build/CMakeFiles/Progress/1)
=======
        Alumno(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string contraseña, std::string carrera, std::vector<std::string> asignaturas, int cuatrimestre, int curso, int matricula, std::vector<std::string> universidad):Usuario(dni, nombre, apellidos, sexo, edad, consulta, contraseña){
>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
            carrera_ = carrera;
            asignaturas_ = asignaturas;
            cuatrimestre_ = cuatrimestre;
            curso_ = curso;
            matricula_ = matricula;

            for(int i = 0; i < universidad.size(); i++){
                universidad_.push_back(universidad[i]);
            }
        }
        
        void SetMatricula(int matricula){matricula_ = matricula;}
        int GetMatricula(){return matricula_;}
        void SetCuatrimestre(int cuatrimestre){cuatrimestre_ = cuatrimestre;}
        int GetCuatrimestre(){return cuatrimestre_;}
        void SetCarrera(std::string carrera){carrera_ = carrera;}
        std::string GetCarrera(){return carrera_;}
        void SetAsignaturas(std::vector<std::string> asignaturas);
        std::vector<std::string> GetAsignaturas(){return asignaturas_;}
        void SetUniversidad(std::vector<std::string> universidad){universidad_ = universidad;};
        std::vector<std::string> GetUniversidad(){return universidad_;}
<<<<<<< HEAD
        void SetCurso(int curso){curso_ = curso;}
        int GetCurso(){return curso_;}
=======
>>>>>>> f453b58 (	deleted:    build/CMakeFiles/Progress/1)
};

#endif