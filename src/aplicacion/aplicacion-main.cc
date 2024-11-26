#include "aplicacion.h"


int main(){

    int menu=0;
    std::vector<Alumno> alumnos;
    std::vector<Profesor> profesores;
    std::vector<Admin> administradores;

    while(menu!=3){
        std::cout<<"1 --> Registrarse"<<std::endl;
        std::cout<<"2 --> Iniciar Sesion"<<std::endl;
        std::cout<<"3 --> Salir"<<std::endl;
        std::cin>>menu;
        std::cout<<std::endl;

        switch(menu){
            case 1:
                if(Registrarse(alumnos, profesores, administradores)==false){
                    std::cout<<"Error al registrarse"<<std::endl;
                    return;
                };
                break;
            case 2:
                if(IniciarSesion()==false){
                    std::cout<<"Error al iniciar sesion"<<std::endl;
                    return;
                };
                break;
                           
        }
    }
}