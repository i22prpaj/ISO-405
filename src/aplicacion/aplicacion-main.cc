#include "aplicacion.h"


std::vector<Alumno> alumnos;
std::vector<Profesor> profesores;
std::vector<Admin> admins;





int main() {
    cargarBD(alumnos, profesores, admins);
    srand(time(NULL));
    int opcion, o;
    do{
        
        std::cout << "\n\t---Bienvenido al sistema de gestión SICUE---\n\n";
        std::cout << "1. Iniciar sesión\n";
        std::cout << "2. Salir\n";
        std::cout << "->";
        std::cin >> o;
        if(o==1){
            std::string nombre_usuario, contrasena;
            std::cout << "\nNombre de usuario: \n\t->";
            std::cin >> nombre_usuario;
            std::cout << "\nContraseña: \n\t->";
            std::cin >> contrasena;

            opcion=existeusuario(nombre_usuario, contrasena, alumnos, profesores, admins);
            switch (opcion) {
                case 1:
                    std::cout << "\n\t---Bienvenido, alumno---\n";
                    menuAlumno(alumnos);
                    break;
                case 2:
                    std::cout << "\n\t---Bienvenido, profesor---\n";
                    menuProfesor(profesores);
                    break;
                case 3:
                    std::cout << "\n\t---Bienvenido, admin---\n";
                    menuAdmin(admins, alumnos, profesores);
                    break;
                case 4:
                    std::cout << "\nSaliendo del programa...\n";
                    break;
                default:
                    std::cout << "\n\t---USUARIO NO ENCONTRADO---\n\n";
            }
        }
        else if(o==2){
            opcion=4;
        }
        else{
            std::cout << "\n\t---Opción no válida---\n";
        }

    }while(opcion!=4);

    std::cout << "\n\t---Saliendo del sistema de gestión SICUE---\n";
    std::cout << "\n\t---Guardando cambios en la base de datos---\n";
    guardarBD(alumnos, profesores, admins);

    return 0;
}