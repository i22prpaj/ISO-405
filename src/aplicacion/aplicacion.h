#ifndef APLICACION_H
#define APLICACION_H
#include "usuario.h"
#include "alumno.h"
#include "profesor.h"
#include "admin.h"
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

//Menus
void menuAlumno(Alumno& alumno);
void menuProfesor(Profesor& profesor);
void menuAdmin(Admin& admin, std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores);
//Fin Menus


//Alumno
void planSICUE(Alumno& alumno);
void plandeConvalidacion(Alumno& alumno);
void consultarConvalidacion(Alumno& alumno);
void anularInscripcion(Alumno& alumno);
//Fin Alumno


//Profesor
void SICUEprofesor(Profesor& profesor);
void consultarEstadoSolicitud(Profesor& profesor);
void anularInscripcionProfesor(Profesor& profesor);
//Fin Profesor


//Admin
void consultarSolicitudesenProceso(Admin& admin, std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores);
void anularInscripcionAdmin(Admin& admin, std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores);
//Fin Admin


//Auxiliares
int existeusuario(std::string nombreusuario, std::string contrasena, std::vector<Alumno>& alumnos,  std::vector<Profesor>& profesores,  std::vector<Admin>& admins);
std::string getRandomElement(const std::vector<std::string>& vec, int maxIndex);
//Fin Auxiliares


//WyR de la BD
void cargarBD(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins);
void guardarBD(const std::vector<Alumno> &alumnos, const std::vector<Profesor> &profesores, const std::vector<Admin> &admins);
//Fin WyR de la BD




#endif

