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
    std::string nombre_usuario, contrasena;
    // Lee el archivo y verifica las credenciales
    std::ifstream archivo("usuarios.txt");
    if (archivo.is_open()) {
        while(!archivo.eof()) {
            archivo >> nombre_usuario >> contrasena;
            //>> lee los datos del archivo hasta encontrar un espacio en blanco o un salto de línea.
            std::cout << nombre_usuario << " " << contrasena << std::endl;
        }
    }
    archivo.close();
}

void guardarBD(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins){
    std::string nombre_usuario, contrasena, tipo_usuario;
    // Almacena las credenciales en un archivo
    std::ofstream archivo("usuarios.txt");
    if (archivo.is_open()) {
        archivo << nombre_usuario << " " << contrasena << std::endl;
        archivo.close();
        std::cout << "Registro exitoso.\n";
    } else {
        std::cout << "Error al abrir el archivo de usuarios.\n";
    }
}
