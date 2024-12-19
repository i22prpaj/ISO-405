#include "aplicacion.h"


/*==========================================================================================================
====================================       MENUS    ========================================================
============================================================================================================*/


void menuAlumno(Alumno& alumno) {
    int opcion;
    do {
        std::cout << "\nMenu Alumno (" << alumno.GetNombreUsuario() << "):\n";
        std::cout << "\t1. Inscribirse al SICUE\n";
        std::cout << "\t2. Inscribirse a un plan de Convalidación\n";
        std::cout << "\t3. Consultar los Planes de Convalidación según la carrera\n";
        std::cout << "\t4. Consultar la inscripción al plan de Convalidación\n";
        std::cout << "\t5. Anular inscripción\n";
        std::cout << "\t6. Salir\n";
        std::cout << "\tSeleccione una opción: \n\t->";
        std::cin >> opcion;
        if(true)
            system("clear"); // Para sistemas Unix/Linux
        switch (opcion) {
            case 1:
                // Implementar inscripción al SICUE
                std::cout << "1. Inscribirse al SICUE\n";
                planSICUE(alumno);
                break;
            case 2:
                // Implementar inscripción a un plan de Convalidación
                std::cout << "2. Inscribirse a un plan de Convalidación\n";
                plandeConvalidacion(alumno);
                break;            
            case 3:
                // Implementar consulta de Planes de Convalidación según la carrera
                std::cout << "3. Consultar los Planes de Convalidación según la carrera\n";
                std::cout << "\n\t->Se podrán seleccionar 6 asignaturas a convalidar\n\n";
                break;
            case 4:
                // Implementar consulta de la inscripción al plan de Convalidación
                std::cout << "4. Consultar la inscripción al plan de Convalidación\n";
                consultarConvalidacion(alumno);
                break;
            case 5:
                // Implementar anulación de inscripción
                std::cout << "5. Anular inscripción\n";
                anularInscripcion(alumno);
                break;
            case 6:
                std::cout << "\n\tSaliendo del menú Alumno...\n";
                break;
            default:
                std::cout << "\n---Opción no válida. Intente de nuevo---\n\n";
        }
        std::cout << "Presione Enter para continuar...";
        std::cin.ignore();
        std::cin.get();
        system("clear"); // Para sistemas Unix/Linux
    } while (opcion != 6);
}

void menuProfesor(Profesor& profesor) {
    int opcion;
    do {
        std::cout << "\nMenu Profesor (" << profesor.GetNombreUsuario() << "):\n";
        std::cout << "1. Inscribirse al SICUE\n";
        std::cout << "2. Ver el estado de su solicitud\n";
        std::cout << "3. Anular inscripción\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        if(true)
            system("clear"); // Para sistemas Unix/Linux
        switch (opcion) {
            case 1:
                // Implementar inscripción al SICUE
                std::cout << "1. Inscribirse al SICUE\n";
                SICUEprofesor(profesor);
                break;
            case 2:
                // Implementar consulta del estado de la solicitud
                std::cout << "2. Ver el estado de su solicitud\n";
                consultarEstadoSolicitud(profesor);
                break;
            case 3:
                // Implementar anulación de inscripción
                std::cout << "3. Anular inscripción\n";
                anularInscripcionProfesor(profesor);
                break;
            case 4:
                std::cout << "Saliendo del menú Profesor...\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }
        std::cout << "Presione Enter para continuar...";
        std::cin.ignore();
        std::cin.get();
        system("clear"); // Para sistemas Unix/Linux
    } while (opcion != 4);
}

void menuAdmin(std::vector<Admin>& admins, std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores) {
    int opcion;
    do {
        std::cout << "Menu Admin:\n";
        std::cout << "1. Consultar Solicitudes en Proceso\n";
        std::cout << "2. Anular una solicitud en Proceso\n";
        std::cout << "3. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        if(true)
            system("clear"); // Para sistemas Unix/Linux
        switch (opcion) {
            case 1:
                // Implementar creación de plan de convalidación
                consultarSolicitudesenProceso(admins, alumnos, profesores);
                break;
            case 2:
                // Implementar modificación de solicitudes en progreso
                anularInscripcionAdmin(admins, alumnos, profesores);
                break;
            case 3:
                std::cout << "Saliendo del menú Admin...\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }
        std::cout << "Presione Enter para continuar...";
        std::cin.ignore();
        std::cin.get();
        system("clear"); // Para sistemas Unix/Linux
    } while (opcion != 3);
}

/*==========================================================================================================
=============================       FIN MENUS     ==========================================================
============================================================================================================*/





/*==========================================================================================================
============================       FUNCIONES ALUMNOS     ===================================================
============================================================================================================*/

void planSICUE(Alumno& alumno) {
    if (alumno.GetConsulta() == 0) {
        std::cout << "\nAlumno encontrado. Ingrese las universidades a las que desea inscribirse (máximo 5):\n";
        std::vector<std::string> universidades;
        std::string universidad;
        for (int i = 0; i < 5; ++i) {
            std::cout << "\nUniversidad " << i + 1 << ": \n\t\t->";
            std::cin.ignore(); // Ignorar el carácter de nueva línea pendiente
            std::getline(std::cin, universidad);
            std::replace(universidad.begin(), universidad.end(), ' ', '_');
            universidades.push_back(universidad);
            char opcion;
            std::cout << "¿Desea agregar otra universidad? (s/n): ";
            std::cin >> opcion;

            if (opcion == 'n' || opcion == 'N') {
                while (universidades.size() < 5) {
                    universidades.push_back("universidad");
                }
                break;
            }
        }

        alumno.SetUniversidad(universidades);
        std::cout << "\n\t---Universidades inscritas correctamente---\n\n";
        alumno.SetConsulta(1);
    } else {
        std::cout << "\n\t---Ya hay una solicitud en progreso---\n\n";
    }
}

void plandeConvalidacion(Alumno& alumno) {
    if (alumno.GetConsulta() == 1) {
        std::cout << "\nAlumno encontrado. Ingrese las asignaturas que desea convalidar (máximo 6):\n";
        std::vector<std::string> asignaturas;
        std::string asignatura;
        for (int i = 0; i < 6; ++i) {
            std::cout << "\n\tAsignatura " << i + 1 << ":\n\t\t->";
            std::cin.ignore(); // Ignorar el carácter de nueva línea pendiente
            std::getline(std::cin, asignatura);
            std::replace(asignatura.begin(), asignatura.end(), ' ', '_');
            asignaturas.push_back(asignatura);
            char opcion;
            std::cout << "¿Desea agregar otra asignatura? (s/n): ";
            std::cin >> opcion;

            if (opcion == 'n' || opcion == 'N') {
                while (asignaturas.size() < 6) {
                    asignaturas.push_back("asignatura");
                }
                break;
            }
        }

        alumno.SetAsignaturas(asignaturas);
        std::cout << "\n\t---Asignaturas convalidadas correctamente---\n\n";
        alumno.SetConsulta(2);
    } else if (alumno.GetConsulta() == 2) {
        char opcion;
        std::cout << "\nYa ha seleccionado las asignaturas. ¿Desea modificar su elección? (s/n): ";
        std::cin >> opcion;

        if (opcion == 's' || opcion == 'S') {
            std::cout << "\nIngrese las nuevas asignaturas que desea convalidar (máximo 6):\n";
            std::vector<std::string> asignaturas;
            std::string asignatura;
            for (int i = 0; i < 6; ++i) {
                std::cout << "\n\tAsignatura " << i + 1 << ":\n\t\t->";
                std::cin.ignore(); // Ignorar el carácter de nueva línea pendiente
                std::getline(std::cin, asignatura);
                std::replace(asignatura.begin(), asignatura.end(), ' ', '_');
                asignaturas.push_back(asignatura);
                char opcion;
                std::cout << "¿Desea agregar otra asignatura? (s/n): ";
                std::cin >> opcion;

                if (opcion == 'n' || opcion == 'N') {
                    while (asignaturas.size() < 6) {
                        asignaturas.push_back("asignatura");
                    }
                    break;
                }
            }

            alumno.SetAsignaturas(asignaturas);
            std::cout << "\n\t---Asignaturas convalidadas correctamente---\n\n";
        } else {
            std::cout << "\n\t---No se realizaron cambios en las asignaturas---\n\n";
        }
    } else {
        std::cout << "\n\t---Primero debe seleccionar las universidades---\n\n";
    }
}

void consultarConvalidacion(Alumno& alumno) {
    if (alumno.GetConsulta() == 1 || alumno.GetConsulta() == 2) {
        std::cout << "\nAlumno encontrado. Consultando inscripción...\n";
        std::string universidad_aceptada = getRandomElement(alumno.GetUniversidad(), 5);
        std::cout << "\n\t-> Ha sido aceptado en la universidad: " << universidad_aceptada << "\n";

        if (alumno.GetConsulta() == 2) {
            int num_asignaturas_aceptadas = rand() % 7; // Número aleatorio entre 0 y 6

            if (num_asignaturas_aceptadas == 0) {
                std::cout << "\n\t-> No se han aceptado asignaturas.\n";
                return;
            }

            for (int i = 0; i < num_asignaturas_aceptadas; ++i) {
                if (alumno.GetAsignaturas()[i] != "asignatura") {
                    std::cout << "\n\t-> Asignatura aceptada: " << alumno.GetAsignaturas()[i] << "\n";
                }
            }
        } else {
            std::cout << "\n\t---No se han seleccionado las asignaturas para convalidar---\n\n";
        }
    } else if (alumno.GetConsulta() == -1) {
        std::cout << "\n\t-> Su solicitud fue anulada por un administrador\n";
        alumno.SetConsulta(0);
    } else {
        std::cout << "\n\t---No hay ninguna solicitud en curso---\n\n";
    }
}

void anularInscripcion(Alumno& alumno) {
    if (alumno.GetConsulta() == 0) {
        std::cout << "\n\t---No hay ninguna solicitud en proceso para anular---\n\n";
        return;
    }

    char confirmacion;
    std::cout << "\nAlumno encontrado. ¿Está seguro de que desea anular la inscripción? (s/n): ";
    std::cin >> confirmacion;

    if (confirmacion == 's' || confirmacion == 'S') {
        std::vector<std::string> universidades(5, "universidad");
        std::vector<std::string> asignaturas(6, "asignatura");
        alumno.SetUniversidad(universidades);
        alumno.SetAsignaturas(asignaturas);
        std::cout << "\n\t---Inscripción anulada correctamente---\n\n";
        alumno.SetConsulta(0);
    } else {
        std::cout << "\n\t---Anulación de inscripción cancelada---\n\n";
    }
}
/*==========================================================================================================
============================       FIN ALUMNO     ==========================================================
============================================================================================================*/



/*==========================================================================================================
============================       FUNCIONES PROFESORES     ================================================
============================================================================================================*/
void SICUEprofesor(Profesor& profesor) {
    if (profesor.GetConsulta() == 0) {
        std::cout << "\nProfesor encontrado. Ingrese las universidades a las que desea inscribirse (máximo 5):\n";
        std::vector<std::string> universidades;
        std::string universidad;
        for (int i = 0; i < 5; ++i) {
            std::cout << "\nUniversidad " << i + 1 << ": \n\t\t->";
            std::cin.ignore(); // Ignorar el carácter de nueva línea pendiente
            std::getline(std::cin, universidad);
            std::replace(universidad.begin(), universidad.end(), ' ', '_');
            universidades.push_back(universidad);
            char opcion;
            std::cout << "¿Desea agregar otra universidad? (s/n): ";
            std::cin >> opcion;

            if (opcion == 'n' || opcion == 'N') {
                while (universidades.size() < 5) {
                    universidades.push_back("universidad");
                }
                break;
            }
        }

        profesor.SetUniversidad(universidades);
        std::cout << "\n\t---Universidades inscritas correctamente---\n\n";
        profesor.SetConsulta(1);
    } else {
        std::cout << "\n\t---Ya hay una solicitud en progreso---\n\n";
    }
}

void consultarEstadoSolicitud(Profesor& profesor) {
    if (profesor.GetConsulta() == 1) {
        std::cout << "\nProfesor encontrado. Consultando inscripción...\n";
        std::string universidad_aceptada = getRandomElement(profesor.GetUniversidad(), 5);
        std::cout << "\n\t-> Ha sido aceptado en la universidad: " << universidad_aceptada << "\n";
    } else if (profesor.GetConsulta() == -1) {
        std::cout << "\n\t-> Su solicitud fue anulada por un administrador\n";
        profesor.SetConsulta(0);
    } else {
        std::cout << "\n\t---No hay ninguna solicitud en curso---\n\n";
    }
}

void anularInscripcionProfesor(Profesor& profesor) {
    if (profesor.GetConsulta() == 0) {
        std::cout << "\n\t---No hay ninguna solicitud en proceso para anular---\n\n";
        return;
    }

    char confirmacion;
    std::cout << "\nProfesor encontrado. ¿Está seguro de que desea anular la inscripción? (s/n): ";
    std::cin >> confirmacion;

    if (confirmacion == 's' || confirmacion == 'S') {
        std::vector<std::string> universidades(5, "universidad");
        profesor.SetUniversidad(universidades);
        std::cout << "\n\t---Inscripción anulada correctamente---\n\n";
        profesor.SetConsulta(0);
    } else {
        std::cout << "\n\t---Anulación de inscripción cancelada---\n\n";
    }
}


/*==========================================================================================================
============================       FIN PROFESOR     ========================================================
============================================================================================================*/


/*==========================================================================================================
============================       FUNCIONES ADMINS ========================================================
============================================================================================================*/

void consultarSolicitudesenProceso(std::vector<Admin>& admins, std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores){
    std::cout << "1. Consultar Solicitudes en Proceso\n";
    std::string nombre_usuario, contrasena;
    std::cout << "Ingrese su nombre de usuario: \n\t->";
    std::cin >> nombre_usuario;
    std::cout << "Ingrese su contraseña: \n\t->";
    std::cin >> contrasena;

    auto it = std::find_if(admins.begin(), admins.end(), [&](const Admin& admin) {
        return admin.GetNombreUsuario() == nombre_usuario && admin.GetContrasena() == contrasena;
    });

    if (it != admins.end()) {
        std::cout << "\nAdministrador encontrado. Consultando solicitudes en proceso...\n";

        std::cout << "\nSolicitudes de Alumnos:\n";
        for (const auto& alumno : alumnos) {
            if (alumno.GetConsulta() > 0) {
                std::cout << "DNI: " << alumno.GetDNI() << ", Nombre: " << alumno.GetNombre() << ", Apellidos: " << alumno.GetApellidos() << ", Usuario: " << alumno.GetNombreUsuario() << "\n";
                std::cout << "Universidades: ";
                for (const auto& universidad : alumno.GetUniversidad()) {
                    if (universidad != "universidad") {
                        std::cout << universidad << " ";
                    }
                }
                std::cout << "\n";
                if (alumno.GetConsulta() == 2) {
                    std::cout << "Asignaturas: ";
                    for (const auto& asignatura : alumno.GetAsignaturas()) {
                        if (asignatura != "asignatura") {
                            std::cout << asignatura << " ";
                        }
                    }
                    std::cout << "\n";
                }
            }
        }

        std::cout << "\nSolicitudes de Profesores:\n";
        for (const auto& profesor : profesores) {
            if (profesor.GetConsulta() > 0) {
                std::cout << "DNI: " << profesor.GetDNI() << ", Nombre: " << profesor.GetNombre() << ", Apellidos: " << profesor.GetApellidos() << ", Usuario: " << profesor.GetNombreUsuario() << "\n";
                std::cout << "Universidades: ";
                for (const auto& universidad : profesor.GetUniversidad()) {
                    if (universidad != "universidad") {
                        std::cout << universidad << " ";
                    }
                }
                std::cout << "\n";
            }
        }
    } else {
        std::cout << "\n\t---Administrador no encontrado o credenciales incorrectas---\n\n";
    }
}

void anularInscripcionAdmin(std::vector<Admin>& admins, std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores){
    std::cout << "2. Anular una solicitud en Proceso\n";
    std::string nombre_usuario, contrasena;
    std::cout << "Ingrese su nombre de usuario: \n\t->";
    std::cin >> nombre_usuario;
    std::cout << "Ingrese su contraseña: \n\t->";
    std::cin >> contrasena;

    auto it = std::find_if(admins.begin(), admins.end(), [&](const Admin& admin) {
        return admin.GetNombreUsuario() == nombre_usuario && admin.GetContrasena() == contrasena;
    });

    if (it != admins.end()) {
        std::cout << "\nAdministrador encontrado. Consultando solicitudes en proceso...\n";

        std::cout << "\nSolicitudes de Alumnos:\n";
        for (const auto& alumno : alumnos) {
            if (alumno.GetConsulta() > 0) {
                std::cout << "DNI: " << alumno.GetDNI() << ", Nombre: " << alumno.GetNombre() << ", Apellidos: " << alumno.GetApellidos() << ", Usuario: " << alumno.GetNombreUsuario() << "\n";
                std::cout << "Universidades: ";
                for (const auto& universidad : alumno.GetUniversidad()) {
                    if (universidad != "universidad") {
                        std::cout << universidad << " ";
                    }
                }
                std::cout << "\n";
                if (alumno.GetConsulta() == 2) {
                    std::cout << "Asignaturas: ";
                    for (const auto& asignatura : alumno.GetAsignaturas()) {
                        if (asignatura != "asignatura") {
                            std::cout << asignatura << " ";
                        }
                    }
                    std::cout << "\n";
                }
            }
        }

        std::cout << "\nSolicitudes de Profesores:\n";
        for (const auto& profesor : profesores) {
            if (profesor.GetConsulta() > 0) {
                std::cout << "DNI: " << profesor.GetDNI() << ", Nombre: " << profesor.GetNombre() << ", Apellidos: " << profesor.GetApellidos() << ", Usuario: " << profesor.GetNombreUsuario() << "\n";
                std::cout << "Universidades: ";
                for (const auto& universidad : profesor.GetUniversidad()) {
                    if (universidad != "universidad") {
                        std::cout << universidad << " ";
                    }
                }
                std::cout << "\n";
            }
        }

        char confirmacion;
        std::cout << "\n¿Desea anular alguna solicitud? (s/n): ";
        std::cin >> confirmacion;

        if (confirmacion == 's' || confirmacion == 'S') {
            std::string dni;
            std::cout << "Ingrese el DNI del usuario al que desea anular la solicitud: \n\t->";
            std::cin >> dni;

            auto it_alumno = std::find_if(alumnos.begin(), alumnos.end(), [&](const Alumno& alumno) {
                return alumno.GetDNI() == dni;
            });

            if (it_alumno != alumnos.end()) {
                std::vector<std::string> universidades(5, "universidad");
                std::vector<std::string> asignaturas(6, "asignatura");
                it_alumno->SetUniversidad(universidades);
                it_alumno->SetAsignaturas(asignaturas);
                it_alumno->SetConsulta(-1);
                std::cout << "\n\t---Inscripción de alumno anulada correctamente---\n\n";
            } else {
                auto it_profesor = std::find_if(profesores.begin(), profesores.end(), [&](const Profesor& profesor) {
                    return profesor.GetDNI() == dni;
                });

                if (it_profesor != profesores.end()) {
                    std::vector<std::string> universidades(5, "universidad");
                    it_profesor->SetUniversidad(universidades);
                    it_profesor->SetConsulta(-1);
                    std::cout << "\n\t---Inscripción de profesor anulada correctamente---\n\n";
                } else {
                    std::cout << "\n\t---Usuario no encontrado---\n\n";
                }
            }
        } else {
            std::cout << "\n\t---No se realizaron anulaciones---\n\n";
        }
    } else {
        std::cout << "\n\t---Administrador no encontrado o credenciales incorrectas---\n\n";
    }
}



/*==========================================================================================================
============================       FIN ADMINS     ==========================================================
============================================================================================================*/


/*==========================================================================================================
============================       AUXILIARES     ==========================================================
============================================================================================================*/

int existeusuario(std::string nombreusuario, std::string contrasena, std::vector<Alumno>& alumnos,  std::vector<Profesor>& profesores,  std::vector<Admin>& admins){
    for (auto alumno : alumnos){
        if (alumno.GetNombreUsuario() == nombreusuario && alumno.GetContrasena() == contrasena){
            return 1;
        }
    }
    for (auto profesor : profesores){
        if (profesor.GetNombreUsuario() == nombreusuario && profesor.GetContrasena() == contrasena){
            return 2;
        }
    }
    for (auto admin : admins){
        if (admin.GetNombreUsuario() == nombreusuario && admin.GetContrasena() == contrasena){
            return 3;
        }
    }
    return 0;
}

std::string getRandomElement(const std::vector<std::string>& vec, int maxIndex) {
    int index;
    do {
        index = rand() % maxIndex;
    } while (vec[index] == "universidad" || vec[index] == "asignatura");
    return vec[index];
}

/*==========================================================================================================
============================       FIN AUXILIAR     ========================================================
============================================================================================================*/






/*==========================================================================================================
============================       WyR DE LA BD     ========================================================
============================================================================================================*/



void cargarBD(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins) {
    std::ifstream archivo_alumnos("/workspaces/ISO-405/build/src/aplicacion/alumnos.txt");
    std::ifstream archivo_profesores("/workspaces/ISO-405/build/src/aplicacion/profesores.txt");
    std::ifstream archivo_admins("/workspaces/ISO-405/build/src/aplicacion/admins.txt");

    std::cout<<"Leyendo alumnos.txt\n";
    if (archivo_alumnos.is_open()) {
        std::string linea;
        while (getline(archivo_alumnos, linea)) {
            std::istringstream iss(linea);
            std::string dni, nombre, apellidos, sexo, nombre_usuario, contrasena, carrera, u1,u2,u3,u4,u5,a1,a2,a3,a4,a5,a6;
            int edad, consulta, cuatrimestre, curso, matricula;
            std::vector<std::string> asignaturas, universidad;
            iss >> dni >> nombre >> apellidos >> sexo >> edad >> consulta >> nombre_usuario >> contrasena >> carrera >> cuatrimestre >> curso >> matricula >> u1 >> u2 >> u3 >> u4 >> u5 >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
            universidad.push_back(u1);
            universidad.push_back(u2);
            universidad.push_back(u3);
            universidad.push_back(u4);
            universidad.push_back(u5);
            asignaturas.push_back(a1);
            asignaturas.push_back(a2);
            asignaturas.push_back(a3);
            asignaturas.push_back(a4);
            asignaturas.push_back(a5);
            asignaturas.push_back(a6);
            Alumno alumno(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena, carrera, asignaturas, cuatrimestre, curso, matricula, universidad);
            alumnos.push_back(alumno);
        }
        archivo_alumnos.close();
    } else {
        std::cout << "\tError al abrir el archivo de alumnos.\n";
    }

    std::cout<<"Leyendo profesores.txt\n";
    if (archivo_profesores.is_open()) {
        std::string linea;
        while (getline(archivo_profesores, linea)) {
            std::istringstream iss(linea);
            std::string dni, nombre, apellidos, sexo, nombre_usuario, contrasena, u1,u2,u3,u4,u5;
            int edad, consulta;
            std::vector<std::string> universidad;
            iss >> dni >> nombre >> apellidos >> sexo >> edad >> consulta >> nombre_usuario >> contrasena >> u1 >> u2 >> u3 >> u4 >> u5;
            universidad.push_back(u1);
            universidad.push_back(u2);
            universidad.push_back(u3);
            universidad.push_back(u4);
            universidad.push_back(u5);
            Profesor profesor(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena, universidad);
            profesores.push_back(profesor);
        }
        archivo_profesores.close();
    } else {
        std::cout << "\tError al abrir el archivo de profesores.\n";
    }

    std::cout<<"Leyendo admins.txt\n";
    if (archivo_admins.is_open()) {
        std::string linea;
        while (getline(archivo_admins, linea)) {
            std::istringstream iss(linea);
            std::string dni, nombre, apellidos, sexo, nombre_usuario, contrasena;
            int edad, consulta;
            iss >> dni >> nombre >> apellidos >> sexo >> edad >> consulta >> nombre_usuario >> contrasena;
            Admin admin(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena);
            admins.push_back(admin);
        }
        archivo_admins.close();
    } else {
        std::cout << "\tError al abrir el archivo de admins.\n";
    }
}

void guardarBD(const std::vector<Alumno>& alumnos, const std::vector<Profesor>& profesores, const std::vector<Admin>& admins) {
    std::ofstream archivo_alumnos("/workspaces/ISO-405/build/src/aplicacion/alumnos.txt", std::ofstream::trunc);
    if (archivo_alumnos.is_open()) { 
        for (auto alumno : alumnos){
            archivo_alumnos << alumno.GetDNI() << " " << alumno.GetNombre() << " " << alumno.GetApellidos() << " "
                            << alumno.GetSexo() << " " << alumno.GetEdad() << " " << alumno.GetConsulta() << " "
                            << alumno.GetNombreUsuario() << " " << alumno.GetContrasena() << " " << alumno.GetCarrera() << " "
                            << alumno.GetCuatrimestre() << " " << alumno.GetCurso() << " " << alumno.GetMatricula();
            for (const auto& universidad : alumno.GetUniversidad()) {
                archivo_alumnos << " " << universidad;
            }

            for (const auto& asignatura : alumno.GetAsignaturas()) {
                archivo_alumnos << " " << asignatura;
            }
            archivo_alumnos << "\n";
        }
        archivo_alumnos.close();
    } else {
        std::cout << "Error al abrir el archivo de alumnos para escribir.\n";
    }

    std::ofstream archivo_profesores("/workspaces/ISO-405/build/src/aplicacion/profesores.txt");
    if (archivo_profesores.is_open()) {
        for (auto profesor : profesores) {
            archivo_profesores << profesor.GetDNI() << " " << profesor.GetNombre() << " " << profesor.GetApellidos() << " "
                               << profesor.GetSexo() << " " << profesor.GetEdad() << " " << profesor.GetConsulta() << " "
                               << profesor.GetNombreUsuario() << " " << profesor.GetContrasena();
            for (const auto& universidad : profesor.GetUniversidad()) {
                archivo_profesores << " " << universidad;
            }
            archivo_profesores << "\n";
        }
        archivo_profesores.close();
    } else {
        std::cout << "Error al abrir el archivo de profesores para escribir.\n";
    }

    std::ofstream archivo_admins("/workspaces/ISO-405/build/src/aplicacion/admins.txt");
    if (archivo_admins.is_open()) {
        for (auto admin : admins) {
            archivo_admins << admin.GetDNI() << " " << admin.GetNombre() << " " << admin.GetApellidos() << " "
                           << admin.GetSexo() << " " << admin.GetEdad() << " " << admin.GetConsulta() << " "
                           << admin.GetNombreUsuario() << " " << admin.GetContrasena() << "\n";
        }
        archivo_admins.close();
    } else {
        std::cout << "Error al abrir el archivo de admins para escribir.\n";
    }
}


/*==========================================================================================================
===================================       FIN BD    ========================================================
============================================================================================================*/