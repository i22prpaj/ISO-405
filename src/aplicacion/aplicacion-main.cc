#include "aplicacion.h"


<<<<<<< HEAD
<<<<<<< HEAD
int main(){
=======
void main(){
>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
=======
int main(){
>>>>>>> 0338030 (Co-authored-by: Alvaro394 <Alvaro394@users.noreply.github.com>)

    int menu=0;
    std::vector<Alumno> alumnos;
    std::vector<Profesor> profesores;
    std::vector<Admin> administradores;

<<<<<<< HEAD
<<<<<<< HEAD
    cargarBD(alumnos, profesores, administradores);

=======
>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
=======
    cargarBD(alumnos, profesores, administradores);

>>>>>>> c0e4e8d (	modified:   build/src/aplicacion/CMakeFiles/aplicacion-main.dir/CXX.includecache)
    while(menu!=3){
        std::cout<<"1 --> Registrarse"<<std::endl;
        std::cout<<"2 --> Iniciar Sesion"<<std::endl;
        std::cout<<"3 --> Salir"<<std::endl;
        std::cin>>menu;
        std::cout<<std::endl;

        switch(menu){
            case 1:
<<<<<<< HEAD
<<<<<<< HEAD
                if(Registrarse(alumnos, profesores, administradores)==false){
                    std::cout<<"Error al registrarse"<<std::endl;
<<<<<<< HEAD
<<<<<<< HEAD
                };
                break;
            case 2:
                if(IniciarSesion(alumnos, profesores, administradores)==false){
                    std::cout<<"Error al iniciar sesion"<<std::endl;
=======
                if(Registrarse()==false){
=======
                if(Registrarse(alumnos, profesores, administradores)==false){
>>>>>>> 3063a41 (	modified:   src/aplicacion/aplicacion-main.cc)
                    std::cout<<"Error al registrarse"<<std::endl;
                    return;
=======
                    exit(EXIT_FAILURE);
>>>>>>> 88af963 (	renamed:    build/CMakeFiles/Progress/6 -> build/CMakeFiles/Progress/7)
=======
>>>>>>> c2f2596 (	modified:   build/src/aplicacion/CMakeFiles/aplicacion.dir/aplicacion.cc.o)
                };
                break;
            case 2:
                if(IniciarSesion(alumnos, profesores, administradores)==false){
                    std::cout<<"Error al iniciar sesion"<<std::endl;
<<<<<<< HEAD
<<<<<<< HEAD
                    return;
>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
=======
                    exit(EXIT_FAILURE);
>>>>>>> 88af963 (	renamed:    build/CMakeFiles/Progress/6 -> build/CMakeFiles/Progress/7)
=======
>>>>>>> c2f2596 (	modified:   build/src/aplicacion/CMakeFiles/aplicacion.dir/aplicacion.cc.o)
                };
                break;
                           
        }
    }
<<<<<<< HEAD
<<<<<<< HEAD

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
                      << ", \nCuatrimestre: " << alumno.GetCuatrimestre()
                      << ", Curso: " << alumno.GetCurso()
                      << ", Matrícula: " << alumno.GetMatricula()  
                      << ", Universidad: " /*<< alumno.GetUniversidad()*/<<"\n";
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
                      << ", Cuatrimestre: " << alumno.GetCuatrimestre()
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
=======
>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
=======

    guardarBD(alumnos, profesores, administradores);
>>>>>>> c0e4e8d (	modified:   build/src/aplicacion/CMakeFiles/aplicacion-main.dir/CXX.includecache)
}