#include "aplicacion.h"


int main(){

    int menu=0;
    std::vector<Alumno> alumnos;
    std::vector<Profesor> profesores;
    std::vector<Admin> administradores;

    cargarBD(alumnos, profesores, administradores);

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
                };
                break;
            case 2:
                if(IniciarSesion(alumnos, profesores, administradores)==false){
                    std::cout<<"Error al iniciar sesion"<<std::endl;
                };
                break;
                           
        }
    }

    if (alumnos.empty()) {
       std::cout << "El vector de alumnos está vacío.\n";
    }
    else {
        std::cout << "Lista de alumnos registrados:\n";
        for (auto alumno : alumnos) {
            std::cout << "\t|->DNI: " << alumno.GetDNI() 
                      << ", Nombre: " << alumno.GetNombre() 
                      << ", Apellidos: " << alumno.GetApellidos() 
                      << ", Sexo: " << alumno.GetSexo()
                      << ", Edad: " << alumno.GetEdad() 
                      << ", Consultas: " << alumno.GetConsulta()
                      << ", Nombre de usuario: " << alumno.GetNombreUsuario()
                      << ", Contraseña: " << alumno.GetContrasena()
                      << ", Carrera: " << alumno.GetCarrera()
                      << ", /nCuatrimestre: " << alumno.GetCuatrimestre()
                      << ", Curso: " << alumno.GetCurso()
                      << ", Matrícula: " << alumno.GetMatricula() <<  "\n";
        }
        std::cout<<"\n";
    }

    if (profesores.empty()) {
        std::cout << "El vector de profesores está vacío.\n";
     }
     else {
         std::cout << "Lista de profesores registrados:\n";
         for (auto profesor : profesores) {
             std::cout << "\t|->DNI: " << profesor.GetDNI() 
                       << ", Nombre: " << profesor.GetNombre() 
                       << ", Apellidos: " << profesor.GetApellidos() 
                       << ", Edad: " << profesor.GetEdad()<< "\n";
         }
         std::cout<<"\n";
     }


     if (administradores.empty()) {
        std::cout << "El vector de administradores está vacío.\n";
     }
     else {
         std::cout << "Lista de administradores registrados:\n";
         for (auto administrador : administradores) {
             std::cout << "\t|->DNI: " << administrador.GetDNI() 
                       << ", Nombre: " << administrador.GetNombre() 
                       << ", Apellidos: " << administrador.GetApellidos() 
                       << ", Edad: " << administrador.GetEdad()<<"\n";
         }
         std::cout<<"\n";
     }

    guardarBD(alumnos, profesores, administradores);
}