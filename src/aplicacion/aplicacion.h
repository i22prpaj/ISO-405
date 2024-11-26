#ifndef APLICACION_H
#define APLICACION_H
#include "usuario.h"
#include "alumno.h"
#include "profesor.h"
#include "admin.h"
#include <fstream>

void cargarBD(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins);
void guardarBD(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins);

bool Registrarse(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins);
bool IniciarSesion(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins);


#endif