#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string> 
#include <vector>

class Usuario{
    private:
        std::string dni_, nombre_, apellidos_, sexo_, nombre_usuario_, contrasena_;
        int edad_, consulta_;
    public:
        Usuario(std::string dni, std::string nombre, std::string apellidos, std::string sexo, int edad, int consulta, std::string nombre_usuario, std::string contrasena){
            dni_ = dni;
            nombre_ = nombre;
            apellidos_ = apellidos;
            if (sexo != "H" && sexo != "M") {
                std::cout << "Sexo no válido, se ha asignado O por defecto" << std::endl;
                sexo = "O";
            }
            sexo_ = sexo;
            if (edad < 18) {
                std::cout << "Edad no válida" << std::endl;
                exit(-1);
            }
            edad_ = edad;

            consulta_ = consulta;
            nombre_usuario_ = nombre_usuario;
            contrasena_ = contrasena;

        }

        std::string GetDNI(){return dni_;}
        std::string GetNombre(){return nombre_;}
        std::string GetApellidos(){return apellidos_;}
        std::string GetSexo(){return sexo_;}
        int GetEdad(){return edad_;}
        void SetDNI(std::string dni){dni_ = dni;}
        void SetNombre(std::string nombre){nombre_ = nombre;}
        void SetApellidos(std::string apellidos){apellidos_ = apellidos;}
        void SetSexo(std::string sexo){
            if(sexo == "H" || sexo == "M")
                sexo_ = sexo;
        
            else sexo_ = "O";
        }
        bool SetEdad(int edad){
            if(edad > 18){
                edad_ = edad;
                return true;
            }
            return false;
        }
        void SetConsulta(int consulta){consulta_ = consulta;}
        int GetConsulta(){return consulta_;}

        void SetNombreUsuario(std::string nombre_usuario){nombre_usuario_ = nombre_usuario;}
        std::string GetNombreUsuario(){return nombre_usuario_;}

        void SetContrasena(std::string contrasena){contrasena_ = contrasena;}
        std::string GetContrasena(){return contrasena_;}


};



#endif


//diagr por componente del grupo