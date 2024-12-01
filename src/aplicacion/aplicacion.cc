#include "aplicacion.h"

bool Registrarse(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins){
    std::vector<std::string> universidad;
    std::string dni, nombre, apellidos, sexo, nombre_usuario, contrasena, tipo_usuario;
    int edad, consulta=0;
    std::cout << "Ingrese su DNI: ";
    std::cin >> dni;
    std::cout << "Ingrese su nombre: ";
    std::cin >> nombre;
    std::cout << "Ingrese sus apellidos: ";
    std::cin >> apellidos;
    std::cout << "Ingrese su sexo: ";
    std::cin >> sexo;
    std::cout << "Ingrese un nombre de usuario: ";
    std::cin >> nombre_usuario;
    std::cout << "Ingrese una contrasena: ";
    std::cin >> contrasena;
    std::cout << "Tipo de usuario (Profesor, Alumno): ";
    std::cin >> tipo_usuario;
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    if(tipo_usuario == "Profesor"){
        Profesor profesor1(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena, universidad);
        profesores.push_back(profesor1);

        return true;
    }
    else if(tipo_usuario == "Alumno"){
        std::string carrera;
        std::vector<std::string> asignaturas, universidad;
        int cuatrimestre, curso, matricula;
        
        std::cout << "Ingrese su carrera: ";
        std::cin >> carrera;
        std::cout << "Ingrese el curso: ";
        std::cin >> curso;
        std::cout << "Ingrese la matrícula: ";
        std::cin >> matricula;
        Alumno alumno1(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena, carrera, asignaturas, cuatrimestre, curso, matricula, universidad);
        alumnos.push_back(alumno1);

        return true;
    }

    return false;

}

bool IniciarSesion(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins){
    
    std::string nombre_usuario, contrasena;
    std::cout << "Ingrese su nombre de usuario: ";
    std::cin >> nombre_usuario;
    std::cout << "Ingrese su contrasena: ";
    std::cin >> contrasena;

    // Verifica las credenciales
    return true;
}

void cargarBD(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins){
    std::ifstream archivo_alumnos("alumnos.txt");
    std::ifstream archivo_profesores("profesores.txt");
    std::ifstream archivo_admins("admins.txt");

    if (archivo_alumnos.is_open()) {
        std::string linea;
        while (getline(archivo_alumnos, linea)) {
            std::istringstream iss(linea);
            std::string dni, nombre, apellidos, sexo, nombre_usuario, contrasena, carrera;
            int edad, consulta, cuatrimestre, curso, matricula;
            std::vector<std::string> asignaturas, universidad;
            iss >> dni >> nombre >> apellidos >> sexo >> edad >> consulta >> nombre_usuario >> contrasena >> carrera >> cuatrimestre >> curso >> matricula;
            Alumno alumno(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena, carrera, asignaturas, cuatrimestre, curso, matricula, universidad);
            alumnos.push_back(alumno);
        }
        archivo_alumnos.close();
    } else {
        std::cout << "Error al abrir el archivo de alumnos.\n";
    }

    if (archivo_profesores.is_open()) {
        std::string linea;
        while (getline(archivo_profesores, linea)) {
            std::istringstream iss(linea);
            std::string dni, nombre, apellidos, sexo, nombre_usuario, contrasena;
            int edad, consulta;
            std::vector<std::string> universidad;
            iss >> dni >> nombre >> apellidos >> sexo >> edad >> consulta >> nombre_usuario >> contrasena;
            Profesor profesor(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena, universidad);
            profesores.push_back(profesor);
        }
        archivo_profesores.close();
    } else {
        std::cout << "Error al abrir el archivo de profesores.\n";
    }

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
        std::cout << "Error al abrir el archivo de admins.\n";
    }
}

void guardarBD(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins){

    std::ofstream archivo_alumnos("alumnos.txt");
    if (archivo_alumnos.is_open()) { 
        for (auto alumno : alumnos){
            archivo_alumnos << alumno.GetDNI() << " " << alumno.GetNombre() << " " << alumno.GetApellidos() << " "
                            << alumno.GetSexo() << " " << alumno.GetEdad() << " " << alumno.GetConsulta() << " "
                            << alumno.GetNombreUsuario() << " " << alumno.GetContrasena() << " " << alumno.GetCarrera() << " "
                            << alumno.GetCuatrimestre() << " " << alumno.GetCurso() << " " << alumno.GetMatricula() << "\n";
        }
        archivo_alumnos.close();
    } else {
        std::cout << "Error al abrir el archivo de alumnos para escribir.\n";
    }

    std::ofstream archivo_profesores("profesores.txt");
    if (archivo_profesores.is_open()) {
        for (auto profesor : profesores) {
            archivo_profesores << profesor.GetDNI() << " " << profesor.GetNombre() << " " << profesor.GetApellidos() << " "
                               << profesor.GetSexo() << " " << profesor.GetEdad() << " " << profesor.GetConsulta() << " "
                               << profesor.GetNombreUsuario() << " " << profesor.GetContrasena() << "\n";
        }
        archivo_profesores.close();
    } else {
        std::cout << "Error al abrir el archivo de profesores para escribir.\n";
    }

    std::ofstream archivo_admins("admins.txt");
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
