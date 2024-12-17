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

void menuAlumno(std::vector<Alumno> &alumnos);
void menuProfesor(std::vector<Profesor> &profesores);
void menuAdmin(std::vector<Admin> &admins);


void plandeConvalidacion(std::vector<Alumno>& alumnos);
void SICUEalumnos(std::vector<Alumno>& alumnos);
void SICUEprofesor(std::vector<Profesor>& profesores);
void consultarConvalidacion(std::vector<Alumno>& alumnos);
void consultarEstadoSolicitud(std::vector<Profesor>& profesores);
void anularInscripcionAlumno(std::vector<Alumno>& alumnos);
void anularInscripcionProfesor(std::vector<Profesor>& profesores);

void cargarBD(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins);
void guardarBD(const std::vector<Alumno> &alumnos, const std::vector<Profesor> &profesores, const std::vector<Admin> &admins);


std::string getRandomElement(const std::vector<std::string>& vec, int maxIndex);


#endif

