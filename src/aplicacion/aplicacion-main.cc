#include "aplicacion.h"

std::vector<Alumno> alumnos;
std::vector<Profesor> profesores;
std::vector<Admin> admins;
std::vector<PlanConvalidacion> planes;

int main() {
    cargarBD(alumnos, profesores, admins);
    cargarPlanesConvalidacion(planes);
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
                case 1: {
                    std::cout << "\n\t---Bienvenido, alumno---\n";
                    auto it = std::find_if(alumnos.begin(), alumnos.end(), [&](const Alumno& alumno) {
                        return alumno.GetNombreUsuario() == nombre_usuario && alumno.GetContrasena() == contrasena;
                    });
                    if (it != alumnos.end()) {
                        menuAlumno(*it, planes);
                    }
                    break;
                }
                case 2: {
                    std::cout << "\n\t---Bienvenido, profesor---\n";
                    auto it = std::find_if(profesores.begin(), profesores.end(), [&](const Profesor& profesor) {
                        return profesor.GetNombreUsuario() == nombre_usuario && profesor.GetContrasena() == contrasena;
                    });
                    if (it != profesores.end()) {
                        menuProfesor(*it);
                    }
                    break;
                }
                case 3: {
                    std::cout << "\n\t---Bienvenido, admin---\n";
                    auto it = std::find_if(admins.begin(), admins.end(), [&](const Admin& admin) {
                        return admin.GetNombreUsuario() == nombre_usuario && admin.GetContrasena() == contrasena;
                    });
                    if (it != admins.end()) {
                        menuAdmin(*it, alumnos, profesores, planes);
                    }
                    break;
                }
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