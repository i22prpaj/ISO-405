#include "aplicacion.h"

void registrarse(){
    std::string user, password;
    std::cout << "Ingrese un nombre de usuario: ";
    std::cin >> user;
    std::cout << "Ingrese una contraseña: ";
    std::cin >> password;

    // Almacena las credenciales en un archivo
    ofstream archivo("usuarios.txt", );
    if (archivo.is_open()) {
        archivo << user << " " << password << std::endl;
        archivo.close();
        std::cout << "Registro exitoso.\n";
    } else {
        std::cout << "Error al abrir el archivo de usuarios.\n";
    }
}
