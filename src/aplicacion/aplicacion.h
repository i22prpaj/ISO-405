#ifndef APLICACION_H
#define APLICACION_H
#include "usuario.h"
#include "alumno.h"
#include "profesor.h"
#include "admin.h"
<<<<<<< HEAD
<<<<<<< HEAD
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <time.h>

void cargarBD(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins);
void guardarBD(const std::vector<Alumno>& alumnos, const std::vector<Profesor>& profesores, const std::vector<Admin>& admins);

bool Registrarse(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins);
bool IniciarSesion(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins);

bool existeusuario(std::string nombreusuario, std::string contrasena, std::vector<Alumno> &alumnos,  std::vector<Profesor> &profesores,  std::vector<Admin> &admins);
bool validarDNI(const std::string& dni);

void InicioAlumnos(int  menu, Alumno alumno);
void InicioProfesores(int menu, Profesor profesor);
void InicioAdmins(int menu, Admin admin);

void ListarUniversidades();
void HacerFormulario(Alumno &alumno);
int EstadoSolicitud(Alumno alumno);

void guardaAlumno(std::vector<Alumno>& alumnos);
=======
=======
#include <fstream>

void cargarBD();
void guardarBD();
>>>>>>> ef80a67 (Co-authored-by: Alvaro394 <Alvaro394@users.noreply.github.com>)

bool Registrarse(Alumno alumnos[], Profesor profesores[], Admin admins[]);
bool IniciarSesion();


>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
#endif