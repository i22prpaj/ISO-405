#include "aplicacion.h"

bool Registrarse(){
    std::vector<std::string> universidad;
    std::string dni, nombre, apellidos, sexo, nombre_usuario, contraseña, tipo_usuario;
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
    std::cout << "Ingrese una contraseña: ";
    std::cin >> contraseña;
    std::cout << "Tipo de usuario (Profesor, Alumno): ";
    std::cin >> tipo_usuario;
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    if(tipo_usuario == "Profesor"){
        Profesor profesor1(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contraseña, universidad);
        profesores.push_back(profesor1);
    }
    else if(tipo_usuario == "Alumno"){
        
    }
}

bool IniciarSesion(){
    std::string nombre_usuario, contraseña;
    std::cout << "Ingrese su nombre de usuario: ";
    std::cin >> nombre_usuario;
    std::cout << "Ingrese su contraseña: ";
    std::cin >> contraseña;
}

void cargarBD(){
    std::string nombre_usuario, contraseña;
    // Lee el archivo y verifica las credenciales
    std::ifstream archivo("usuarios.txt");
    if (archivo.is_open()) {
        while(!archivo.eof()) {
            archivo >> nombre_usuario >> contraseña;
            //>> lee los datos del archivo hasta encontrar un espacio en blanco o un salto de línea.
            std::cout << nombre_usuario << " " << contraseña << std::endl;
        }
    }
    archivo.close();
}

void guardarBD(){
    std::string nombre_usuario, contraseña, tipo_usuario;
    // Almacena las credenciales en un archivo
    std::ofstream archivo("usuarios.txt");
    if (archivo.is_open()) {
        archivo << nombre_usuario << " " << contraseña << std::endl;
        archivo.close();
        std::cout << "Registro exitoso.\n";
    } else {
        std::cout << "Error al abrir el archivo de usuarios.\n";
    }
}
