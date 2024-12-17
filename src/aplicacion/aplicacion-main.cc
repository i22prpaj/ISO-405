#include "aplicacion.h"


std::vector<Alumno> alumnos;
std::vector<Profesor> profesores;
std::vector<Admin> admins;





int main() {
    cargarBD(alumnos, profesores, admins);

    int opcion;
    do {
        std::cout << "\nMenu Principal:\n";
        std::cout << "\t1. Alumno\n";
        std::cout << "\t2. Profesor\n";
        std::cout << "\t3. Admin\n";
        std::cout << "\t4. Salir\n";
        std::cout << "\tSeleccione una opción: \n\t->"; 
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                menuAlumno(alumnos);
                break;
            case 2:
                menuProfesor(profesores);
                break;
            case 3:
                menuAdmin(admins);
                break;
            case 4:
                std::cout << "\nSaliendo del programa...\n";
                break;
            default:
                std::cout << "\n\t---Opción no válida. Intente de nuevo---\n\n";
        }
    } while (opcion != 4);

    guardarBD(alumnos, profesores, admins);
    return 0;
}