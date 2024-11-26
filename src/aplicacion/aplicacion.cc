#include "aplicacion.h"

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
bool Registrarse(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins) {
    std::string dni, nombre, apellidos, sexo, nombre_usuario, contrasena, tipo_usuario;
    int edad, consulta=0;
    std::cout << "Ingrese su DNI: ";
    std::cin >> dni;
    if(validarDNI(dni)==false){
        std::cout<<"DNI invalido\n";
        return false;
    }
    std::cout << "Ingrese su nombre: ";
    std::cin.ignore();  // Limpia el buffer antes de getline
    std::getline(std::cin, nombre);
    fflush(stdin);
    std::cout << "Ingrese sus apellidos: (Espacio=_)";
    //std::cin.ignore();  // Limpia el buffer antes de getline
    std::getline(std::cin, apellidos);
    fflush(stdin);
    std::cout << "Ingrese su sexo(H o M): ";
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
        std::vector<std::string> universidad;
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

bool IniciarSesion(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins) {
    std::string nombre_usuario, contrasena;
    std::cout << "Ingrese su nombre de usuario: ";
    std::cin >> nombre_usuario;

    std::cout << "Ingrese su contrasena: ";
    std::cin >> contrasena;
    return existeusuario(nombre_usuario, contrasena, alumnos, profesores, admins);
}

bool existeusuario(std::string nombreusuario, std::string contrasena, std::vector<Alumno>& alumnos,  std::vector<Profesor>& profesores,  std::vector<Admin>& admins){
    int i=0;
    for(auto admin: admins){
        if(admin.GetNombreUsuario()==nombreusuario){
            //std::cout<<"\nNombre Usuario encontrado en admins\n";            
            if(admin.GetContrasena()==contrasena){
                std::cout<<"\t|->Se ha iniciado sesion como Administrador\n\n";
                InicioAdmins(0, admin);
                return true;
            }
            //std::cout<<"\t|->Contraseña Incorrecta\n";
        }
    } 

    for(auto alumno: alumnos){
        if(alumno.GetNombreUsuario()==nombreusuario){
            //std::cout<<"\nNombre Usuario encontrado en alumnos\n";      
            if(alumno.GetContrasena()==contrasena){
                std::cout<<"\t|->Se ha iniciado sesion como Alumno\n\n";
                InicioAlumnos(0, alumno);
                std::cout<<"Sesion cerrada\n";
                if(alumno.GetConsulta()==0)
                    alumnos[i].SetConsulta(alumno.GetConsulta()+1);
                alumnos[i].SetUniversidad(alumno.GetUniversidad());
                std::cout<<"Solicitudes en proceso de " << alumnos[i].GetNombreUsuario() << ": " << alumnos[i].GetConsulta()<<"\n";
                guardaAlumno(alumnos);
                return true;
            }
            //std::cout<<"\t|->Contraseña Incorrecta\n";
        }
        i++;
    }    

    for(auto profesor: profesores){
        if(profesor.GetNombreUsuario()==nombreusuario){
            //std::cout<<"\nNombre Usuario encontrado en profesores\n";
            
            if(profesor.GetContrasena()==contrasena){
                std::cout<<"\t|->Se ha iniciado sesion como Profesor\n\n";
                InicioProfesores(0, profesor);
                return true;
            }
            //std::cout<<"\t|->Contraseña Incorrecta\n";
        }
    } 
    std::cout<<"Credenciales Erróneos o el Usuario no ha sido encontrado\n";
    return false;
}

void InicioAlumnos(int menu, Alumno alumno){
    std::cout<<"Alumno: "<<alumno.GetNombre()<<"\n";
    while(menu!=4){
        std::cout<<"1 --> Listar Universidades\n2 --> Proceder al Formulario\n3 --> Consultar Estado de mi Solicitud\n4 --> Cerrar Sesión\n\t->";
        std::cin>>menu;
        int estado;
        switch(menu){
            case 1:
                ListarUniversidades();
                break;
            case 2:
                std::cout<<"Formulario\n";
                HacerFormulario(alumno);
                break;
            case 3:
                estado=EstadoSolicitud(alumno);
                break;
        }
    }
}

void InicioProfesores(int menu, Profesor profesor){


}

void InicioAdmins(int menu, Admin admin){


}

void ListarUniversidades(){
    std::cout<<"Universidades Disponibles:\n";
    std::cout<<"\tAndalucia:\n\t\t-Universidad de Almeria\n\t\t-Universidad de Cadiz\n\t\t-Universidad de Cordoba\n\t\t-Universidad de Granada\n\t\t-Universidad de Huelva\n\t\t-Universidad de Jaen\n\t\t-Universidad de Malaga\n\t\t-Universidad de Sevilla\n";
    std::cout<<"\tAragon:\n\t\t-Universidad de Zaragoza\n\t\t-Universidad San Jorge\n";
    std::cout<<"\tAsturias:\n\t\t-Universidad de Oviedo\n";
    std::cout<<"\tIslas Canarias:\n\t\t-Universidad de Las Palmas de Gran Canaria\n\t\t-Universidad de La Laguna\n";
    std::cout<<"\tCantabria:\n\t\t-Universidad de Cantabria\n";
    std::cout<<"\tCastilla y Leon:\n\t\t-Universidad de Burgos\n\t\t-Universidad de Leon\n\t\t-Universidad de Salamanca\n\t\t-Universidad de Valladolid\n";
    std::cout<<"\tCastilla-La Mancha:\n\t\t-Universidad de Castilla-La Mancha\n";
    std::cout<<"\tCataluña:\n\t\t-Universidad de Barcelona\n\t\t-Universidad Autonoma de Barcelona\n\t\t-Universidad Politecnica de Cataluña\n\t\t-Universidad Pompeu Fabra\n\t\t-Universidad Ramon Llull\n\t\t-Universidad Rovira i Virgili\n\t\t-Universidad Internacional de Cataluña\n";
    std::cout<<"\tComunidad de Madrid:\n\t\t-Universidad Autonoma de Madrid\n\t\t-Universidad Carlos III de Madrid\n\t\t-Universidad Complutense de Madrid\n\t\t-Universidad Politecnica de Madrid\n\t\t-Universidad Rey Juan Carlos\n\t\t-Universidad de Alcala\n";
    std::cout<<"\tComunidad Foral de Navarra:\n\t\t-Universidad Publica de Navarra\n";
    std::cout<<"\tComunidad Valenciana:\n\t\t-Universidad de Alicante\n\t\t-Universidad Jaume I\n\t\t-Universidad Miguel Hernandez\n\t\t-Universidad Politecnica de Valencia\n\t\t-Universidad de Valencia\n";
    std::cout<<"\tExtremadura:\n\t\t-Universidad de Extremadura\n";
    std::cout<<"\tGalicia:\n\t\t-Universidad de A Coruña\n\t\t-Universidad de Santiago de Compostela\n\t\t-Universidad de Vigo\n";
    std::cout<<"\tIslas Baleares:\n\t\t-Universidad de las Islas Baleares\n";
    std::cout<<"\tLa Rioja:\n\t\t-Universidad de La Rioja\n";
    std::cout<<"\tPais Vasco:\n\t\t-Universidad del Pais Vasco\n\t\t-Universidad de Deusto\n\t\t-Universidad de Mondragon\n";
    std::cout<<"\tRegion de Murcia:\n\t\t-Universidad de Murcia\n\t\t-Universidad Politecnica de Cartagena\n";
};

void HacerFormulario(Alumno &alumno){
    std::cout<<"Alumno: "<<alumno.GetNombre()<<"\n";
    if(alumno.GetConsulta()>0){
        std::cout<<"Ya hay un formulario en proceso\n";
        return;
    }
    std::string DNI, nombre, apellido1, apellido2, sexo, carrera;
    int edad, cuatrimestre, curso;

    std::cout<<"DNI: "<<alumno.GetDNI()<<"\n";
    std::cout<<"Nombre: "<<alumno.GetNombre()<<"\n";
    std::cout<<"Apellidos: "<<alumno.GetApellidos()<<"\n";
    std::cout<<"Sexo: "<<alumno.GetSexo()<<"\n";
    std::cout<<"Edad: "<<alumno.GetEdad()<<"\n";
    std::cout<<"Carrera: "<<alumno.GetCarrera();
    std::cout<<"\nPresione Enter si los datos son correctos\n";
    std::cin.ignore();
    std::cin.get();
    std::cout<<"Ingrese el cuatrimestre que desea para el intercambio: ";
    std::cin>>cuatrimestre;
    alumno.SetCuatrimestre(cuatrimestre);
    std::cout<<"Ingrese el curso que desea para el intercambio: ";
    std::cin>>curso;
    alumno.SetCurso(curso);

    std::vector<std::string> universidades;

    std::cout<<"Eliga las universidades a las que desea aplicar (Max 5): ";
    std::string universidad;

    ListarUniversidades();

    
    for (int i = 0; i < 5; ++i) {
        std::cout << "Ingrese la universidad " << i + 1 << ": ";
        std::cin.ignore();
        std::getline(std::cin, universidad);

        if (universidad.empty()) break;
        universidades.push_back(universidad);
    }

    alumno.SetUniversidad(universidades);
    alumno.SetConsulta(alumno.GetConsulta() + 1);

    std::cout << "Formulario completado.\n";
    std::cout << "Espere a ser aceptado. Su formulario ha sido registrado correctamente.\n";
}

int EstadoSolicitud(Alumno alumno){
    std::cout<<"Alumno: " << alumno.GetNombre()<<"\n";
    std::cout<<"Solicitudes: " << alumno.GetConsulta()<<"\n";
    if(alumno.GetConsulta()==0){
        std::cout<<"No hay ninguna solicitud en proceso\n";
        return 0;
    }

    srand(time(NULL));
    int estado=rand()% alumno.GetUniversidad().size();

    std::cout<<"Su solicitud ha sido aceptada en "<<alumno.GetUniversidad()[estado]<<"\n";
    
    return estado;
}

bool validarDNI(const std::string& dni) {
    // Comprobar longitud y formato básico (8 dígitos y 1 letra)
    if (dni.length() != 9) return false;

    // Comprobar si los primeros 8 caracteres son dígitos
    for (int i = 0; i < 8; ++i) {
        if (!isdigit(dni[i])) return false;
    }

    // Comprobar si el último carácter es una letra
    char letra = dni[8];
    if (!isalpha(letra)) return false;

    // Array con las letras válidas según el módulo 23
    const std::string letras = "TRWAGMYFPDXBNJZSQVHLCKE";

    // Convertir los primeros 8 dígitos a un número entero
    int numero = std::stoi(dni.substr(0, 8));

    // Calcular la letra correspondiente
    char letraCalculada = letras[numero % 23];

    // Comparar la letra calculada con la introducida (ignorando mayúsculas o minúsculas)
    return (toupper(letra) == letraCalculada);
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
            std::string dni, nombre, apellidos, sexo, nombre_usuario, contrasena, carrera, u1,u2,u3,u4,u5;
            int edad, consulta, cuatrimestre, curso, matricula;
            std::vector<std::string> asignaturas, universidad;
            iss >> dni >> nombre >> apellidos >> sexo >> edad >> consulta >> nombre_usuario >> contrasena >> carrera >> cuatrimestre >> curso >> matricula >> u1 >> u2 >> u3 >> u4 >> u5;
            universidad.push_back(u1);
            universidad.push_back(u2);
            universidad.push_back(u3);
            universidad.push_back(u4);
            universidad.push_back(u5);
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
            std::string dni, nombre, apellidos, sexo, nombre_usuario, contrasena;
            int edad, consulta;
            std::vector<std::string> universidad;
            iss >> dni >> nombre >> apellidos >> sexo >> edad >> consulta >> nombre_usuario >> contrasena;
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
    std::ofstream archivo_alumnos("/workspaces/ISO-405/build/src/aplicacion/alumnos.txt");
    if (archivo_alumnos.is_open()) { 
        for (auto alumno : alumnos){
            archivo_alumnos << alumno.GetDNI() << " " << alumno.GetNombre() << " " << alumno.GetApellidos() << " "
                            << alumno.GetSexo() << " " << alumno.GetEdad() << " " << alumno.GetConsulta() << " "
                            << alumno.GetNombreUsuario() << " " << alumno.GetContrasena() << " " << alumno.GetCarrera() << " "
                            << alumno.GetCuatrimestre() << " " << alumno.GetCurso() << " " << alumno.GetMatricula();
            for (const auto& universidad : alumno.GetUniversidad()) {
                archivo_alumnos << " " << universidad;
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
                               << profesor.GetNombreUsuario() << " " << profesor.GetContrasena() << "\n";
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

void guardaAlumno(std::vector<Alumno>& alumnos){
    std::ofstream archivo_alumnos("/workspaces/ISO-405/build/src/aplicacion/alumnos.txt", std::ios::trunc);
    if (archivo_alumnos.is_open()) { 
        for (auto alumno : alumnos){
            archivo_alumnos << alumno.GetDNI() << " " << alumno.GetNombre() << " " << alumno.GetApellidos() << " "
                            << alumno.GetSexo() << " " << alumno.GetEdad() << " " << alumno.GetConsulta() << " "
                            << alumno.GetNombreUsuario() << " " << alumno.GetContrasena() << " " << alumno.GetCarrera() << " "
                            << alumno.GetCuatrimestre() << " " << alumno.GetCurso() << " " << alumno.GetMatricula();
            for (const auto& universidad : alumno.GetUniversidad()) {
                archivo_alumnos << " " << universidad;
            }
            archivo_alumnos << "\n";
        }
        archivo_alumnos.close();
    } else {
        std::cout << "Error al abrir el archivo de alumnos para escribir.\n";
    }
}
=======
void registrarse(){
    std::string user, password;
=======
bool Registrarse(){
=======
bool Registrarse(Alumno alumnos[], Profesor profesores[]){
>>>>>>> 0338030 (Co-authored-by: Alvaro394 <Alvaro394@users.noreply.github.com>)
=======
bool Registrarse(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins){
>>>>>>> 88af963 (	renamed:    build/CMakeFiles/Progress/6 -> build/CMakeFiles/Progress/7)
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
>>>>>>> ef80a67 (Co-authored-by: Alvaro394 <Alvaro394@users.noreply.github.com>)
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
>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
