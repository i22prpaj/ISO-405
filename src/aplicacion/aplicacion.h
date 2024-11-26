#ifndef APLICACION_H
#define APLICACION_H
#include "usuario.h"
#include "alumno.h"
#include "profesor.h"
#include "admin.h"
#include <fstream>

void cargarBD();
void guardarBD();

bool Registrarse(Alumno alumnos[], Profesor profesores[], Admin admins[]);
bool IniciarSesion();


#endif