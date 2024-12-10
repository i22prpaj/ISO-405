#ifndef APLICACION_H
#define APLICACION_H
#include "usuario.h"
#include "alumno.h"
#include "profesor.h"
#include "admin.h"
#include <fstream>
#include <sstream>
#include <stdio.h>

void cargarBD(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins);
void guardarBD(const std::vector<Alumno>& alumnos, const std::vector<Profesor>& profesores, const std::vector<Admin>& admins);

bool Registrarse(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins);
bool IniciarSesion(const std::vector<Alumno>& alumnos, const std::vector<Profesor>& profesores, const std::vector<Admin>& admins);

bool existeusuario(std::string nombreusuario, std::string contrasena,const std::vector<Alumno>& alumnos, const std::vector<Profesor>& profesores, const std::vector<Admin>& admins);
bool validarDNI(const std::string& dni);

void InicioAlumnos(int  menu, Alumno alumno);
void InicioProfesores(int menu, Profesor profesor);
void InicioAdmins(int menu, Admin admin);

void ListarUniversidades();
void HacerFormulario(Alumno alumno);
void HacerFormulario(Profesor profesor);
#endif