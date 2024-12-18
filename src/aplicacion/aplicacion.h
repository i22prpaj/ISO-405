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
void menuAlumno(std::vector<Alumno> &alumnos);
void menuProfesor(std::vector<Profesor> &profesores);
void menuAdmin(std::vector<Admin> &admins);
//Fin Menus


//Alumno
void plandeConvalidacion(std::vector<Alumno>& alumnos);
void planSICUE(std::vector<Alumno>& alumnos);
void consultarConvalidacion(std::vector<Alumno>& alumnos);
void anularInscripcion(std::vector<Alumno>& alumnos);
//Fin Alumno


//Profesor
void SICUEprofesor(std::vector<Profesor>& profesores);
void consultarEstadoSolicitud(std::vector<Profesor>& profesores);
void anularInscripcionProfesor(std::vector<Profesor>& profesores);
//Fin Profesor


//Auxiliares
int existeusuario(std::string nombreusuario, std::string contrasena, std::vector<Alumno>& alumnos,  std::vector<Profesor>& profesores,  std::vector<Admin>& admins);
std::string getRandomElement(const std::vector<std::string>& vec, int maxIndex);
//Fin Auxiliares


//WyR de la BD
void cargarBD(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins);
void guardarBD(const std::vector<Alumno> &alumnos, const std::vector<Profesor> &profesores, const std::vector<Admin> &admins);
//Fin WyR de la BD




#endif

