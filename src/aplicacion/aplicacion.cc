#include "aplicacion.h"

void menuAlumno(std::vector<Alumno>& alumnos) {
    int opcion;
    bool sicue = false;
    do {
        std::cout << "\nMenu Alumno:\n";
        std::cout << "\t1. Inscribirse al SICUE\n";
        std::cout << "\t2. Inscribirse a un plan de Convalidación\n";
        std::cout << "\t3. Consultar los Planes de Convalidación según la carrera\n";
        std::cout << "\t4. Consultar la inscripción al plan de Convalidación\n";
        std::cout << "\t5. Anular inscripción\n";
        std::cout << "\t6. Salir\n";
        std::cout << "\tSeleccione una opción: \n\t->";
        std::cin >> opcion;
        switch (opcion) {
            case 1:
                // Implementar inscripción al SICUE
                    SICUEalumnos(alumnos);
                    sicue = true;
                break;            
            case 2:
                if (sicue==false){
                    std::cout << "\n\t->Primero debe inscribirse al SICUE\n\n";
                    break;
                }
                // Implementar inscripción a un plan de Convalidación
                    plandeConvalidacion(alumnos);
                break;
            case 3:
                // Implementar consulta de Planes de Convalidación según la carrera
                std::cout << "\n\t->Se podrán seleccionar 6 asignaturas a convalidar\n\n";
                break;
            case 4:
                // Implementar consulta de la inscripción al plan de Convalidación
                    consultarConvalidacion(alumnos);
                break;
            case 5:
                // Implementar anulación de inscripción
                    anularInscripcionAlumno(alumnos);
                break;
            case 6:
                std::cout << "\n\tSaliendo del menú Alumno...\n";
                break;
            default:
                std::cout << "\n---Opción no válida. Intente de nuevo---\n\n";
        }
    } while (opcion != 6);
}

void menuProfesor(std::vector<Profesor>& profesores) {
    int opcion;
    do {
        std::cout << "Menu Profesor:\n";
        std::cout << "1. Inscribirse al SICUE\n";
        std::cout << "2. Ver el estado de su solicitud\n";
        std::cout << "3. Anular inscripción\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                // Implementar inscripción al SICUE
                SICUEprofesor(profesores);
                break;
            case 2:
                // Implementar consulta del estado de la solicitud
                consultarEstadoSolicitud(profesores);
                break;
            case 3:
                // Implementar anulación de inscripción
                anularInscripcionProfesor(profesores);
                break;
            case 4:
                std::cout << "Saliendo del menú Profesor...\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 4);
}

void menuAdmin(std::vector<Admin>& admins) {
    int opcion;
    do {
        std::cout << "Menu Admin:\n";
        std::cout << "1. Creación plan de convalidación\n";
        std::cout << "2. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                // Implementar creación de plan de convalidación
                break;
            case 2:
                std::cout << "Saliendo del menú Admin...\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 2);
}

void plandeConvalidacion(std::vector<Alumno>& alumnos) {
    std::string nombre_usuario, contrasena;
    std::cout << "\nIngrese su nombre de usuario: \n\t->";
    std::cin >> nombre_usuario;
    std::cout << "\nIngrese su contraseña: \n\t->";
    std::cin >> contrasena;

    auto it = std::find_if(alumnos.begin(), alumnos.end(), [&](const Alumno& alumno) {
        return alumno.GetNombreUsuario() == nombre_usuario && alumno.GetContrasena() == contrasena;
    });

    if (it != alumnos.end()) {
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
                i=6;
            }
        }
        it->SetConsulta(1);
        it->SetAsignaturas(asignaturas);
        std::cout << "\n\t---Asignaturas convalidadas correctamente---\n\n";
    } else {
        std::cout << "\n\t---Alumno no encontrado o credenciales incorrectas---\n\n";
    }
}

void SICUEalumnos(std::vector<Alumno>& alumnos) {
    std::string nombre_usuario, contrasena;
    std::cout << "Ingrese su nombre de usuario: \n\t->";
    std::cin >> nombre_usuario;
    std::cout << "Ingrese su contraseña: \n\t->";
    std::cin >> contrasena;

    auto it = std::find_if(alumnos.begin(), alumnos.end(), [&](const Alumno& alumno) {
        return alumno.GetNombreUsuario() == nombre_usuario && alumno.GetContrasena() == contrasena;
    });

    if (it != alumnos.end()) {
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

        it->SetUniversidad(universidades);
        std::cout << "\n\t---Universidades inscritas correctamente---\n\n";
    } else {
        std::cout << "\n\t---Alumno no encontrado o credenciales incorrectas---\n\n";
    }
}

void SICUEprofesor(std::vector<Profesor>& profesores){
    std::string nombre_usuario, contrasena;
    std::cout << "Ingrese su nombre de usuario: \n\t->";
    std::cin >> nombre_usuario;
    std::cout << "Ingrese su contraseña: \n\t->";
    std::cin >> contrasena;

    auto it = std::find_if(profesores.begin(), profesores.end(), [&](const Profesor& profesores) {
        return profesores.GetNombreUsuario() == nombre_usuario && profesores.GetContrasena() == contrasena;
    });

    if (it != profesores.end()){
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
        
        it->SetConsulta(1);
        it->SetUniversidad(universidades);
        std::cout << "\n\t---Universidades inscritas correctamente---\n\n";
    } else {
        std::cout << "\n\t---Profesor no encontrado o credenciales incorrectas---\n\n";
    }
}


std::string getRandomElement(const std::vector<std::string>& vec, int maxIndex) {
    int index;
    do {
        index = rand() % maxIndex;
    } while (vec[index] == "universidad" || vec[index] == "asignatura");
    return vec[index];
}

void consultarConvalidacion(std::vector<Alumno>& alumnos) {
    std::string nombre_usuario, contrasena;
    std::cout << "Ingrese su nombre de usuario: \n\t->";
    std::cin >> nombre_usuario;
    std::cout << "Ingrese su contraseña: \n\t->";
    std::cin >> contrasena;
    auto it = std::find_if(alumnos.begin(), alumnos.end(), [&](const Alumno& alumno) {
        return alumno.GetNombreUsuario() == nombre_usuario && alumno.GetContrasena() == contrasena;
    });
    if (it != alumnos.end()) {
        std::cout << "\nAlumno encontrado. Consultando inscripción...\n";
        if(it->GetConsulta() == 0) {
            std::cout << "\n\t-> Aún no ha realizado ninguna inscripción al plan de convalidación\n";
            return;
        }
        srand(time(NULL));
        std::string universidad_aceptada = getRandomElement(it->GetUniversidad(), 5);
        std::cout << "\n\t-> Ha sido aceptado en la universidad: " << universidad_aceptada << "\n";

        int num_asignaturas_aceptadas = rand() % 7; // Número aleatorio entre 0 y 6

        if(num_asignaturas_aceptadas == 0) {
            std::cout << "\n\t-> No se han aceptado asignaturas.\n";
            return;
        }

        for (int i = 0; i < num_asignaturas_aceptadas; ++i) {
            if (it->GetAsignaturas()[i] != "asignatura") {
            std::cout << "\n\t-> Asignatura aceptada: " << it->GetAsignaturas()[i] << "\n";
            }
        }
    } else {
        std::cout << "\n\t---Alumno no encontrado o credenciales incorrectas---\n\n";
    }
}

void consultarEstadoSolicitud(std::vector<Profesor>& profesores){
    std::string nombre_usuario, contrasena;
    std::cout << "Ingrese su nombre de usuario: \n\t->";
    std::cin >> nombre_usuario;
    std::cout << "Ingrese su contraseña: \n\t->";
    std::cin >> contrasena;

    auto it = std::find_if(profesores.begin(), profesores.end(), [&](const Profesor& profesores) {
        return profesores.GetNombreUsuario() == nombre_usuario && profesores.GetContrasena() == contrasena;
    });

    if (it != profesores.end()){
        std::cout << "\nProfesor encontrado. Consultando inscripción...\n";
        if(it->GetConsulta() == 0) {
            std::cout << "\n\t-> Aún no ha realizado ninguna inscripción al plan de convalidación\n";
            return;
        }
        srand(time(NULL));
        std::string universidad_aceptada = getRandomElement(it->GetUniversidad(), 5);
        std::cout << "\n\t-> Ha sido aceptado en la universidad: " << universidad_aceptada << "\n";
    } else {
        std::cout << "\n\t---Profesor no encontrado o credenciales incorrectas---\n\n";
    }
}

void anularInscripcionAlumno(std::vector<Alumno>& alumnos){
    std::string nombre_usuario, contrasena;
    std::cout << "Ingrese su nombre de usuario: \n\t->";
    std::cin >> nombre_usuario;
    std::cout << "Ingrese su contraseña: \n\t->";
    std::cin >> contrasena;

    auto it = std::find_if(alumnos.begin(), alumnos.end(), [&](const Alumno& alumno) {
        return alumno.GetNombreUsuario() == nombre_usuario && alumno.GetContrasena() == contrasena;
    });

    if (it != alumnos.end()) {
        char confirmacion;
        std::cout << "\nAlumno encontrado.";
        if(it->GetConsulta() == 0) {
            std::cout << "\n\t-> Este alumno aún no ha realizado ninguna inscripción al plan de convalidación\n";
            return;
        }
        std::cout << "¿Está seguro de que desea anular la inscripción? (s/n): ";
        std::cin >> confirmacion;

        if (confirmacion == 's' || confirmacion == 'S') {
            std::vector<std::string> universidades(5, "universidad");
            std::vector<std::string> asignaturas(6, "asignatura");
            it->SetUniversidad(universidades);
            it->SetAsignaturas(asignaturas);
            it->SetConsulta(0);
            std::cout << "\n\t---Inscripción anulada correctamente---\n\n";
        } else {
            std::cout << "\n\t---Anulación de inscripción cancelada---\n\n";
        }
    } else {
        std::cout << "\n\t---Alumno no encontrado o credenciales incorrectas---\n\n";
    }
}

void anularInscripcionProfesor(std::vector<Profesor>& profesores){
    std::string nombre_usuario, contrasena;
    std::cout << "Ingrese su nombre de usuario: \n\t->";
    std::cin >> nombre_usuario;
    std::cout << "Ingrese su contraseña: \n\t->";
    std::cin >> contrasena;

    auto it = std::find_if(profesores.begin(), profesores.end(), [&](const Profesor& profesor) {
        return profesor.GetNombreUsuario() == nombre_usuario && profesor.GetContrasena() == contrasena;
    });

    if (it != profesores.end()) {
        char confirmacion;
        std::cout << "\nProfesor encontrado.";
        if(it->GetConsulta() == 0) {
            std::cout << "\n\t-> Este profesor aún no ha realizado ninguna inscripción al plan de convalidación\n";
            return;
        }
        std::cout << "¿Está seguro de que desea anular la inscripción? (s/n): ";
        std::cin >> confirmacion;

        if (confirmacion == 's' || confirmacion == 'S') {
            std::vector<std::string> universidades(5, "universidad");
            it->SetUniversidad(universidades);
            it->SetConsulta(0);
            std::cout << "\n\t---Inscripción anulada correctamente---\n\n";
        } else {
            std::cout << "\n\t---Anulación de inscripción cancelada---\n\n";
        }
    } else {
        std::cout << "\n\t---Profesor no encontrado o credenciales incorrectas---\n\n";
    }
}


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
            iss >> dni >> nombre >> apellidos >> sexo >> edad >> consulta >> nombre_usuario >> contrasena;
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