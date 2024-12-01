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
<<<<<<< HEAD
#include <time.h>
=======
>>>>>>> a20cc29 (Add user validation and improve output formatting in main application)

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
#include <sstream>

<<<<<<< HEAD
<<<<<<< HEAD
void cargarBD();
void guardarBD();
>>>>>>> ef80a67 (Co-authored-by: Alvaro394 <Alvaro394@users.noreply.github.com>)
=======
void cargarBD(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins);
void guardarBD(std::vector<Alumno> alumnos, std::vector<Profesor> profesores, std::vector<Admin> admins);
>>>>>>> c2f2596 (	modified:   build/src/aplicacion/CMakeFiles/aplicacion.dir/aplicacion.cc.o)
=======
void cargarBD(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins);
void guardarBD(const std::vector<Alumno>& alumnos, const std::vector<Profesor>& profesores, const std::vector<Admin>& admins);
>>>>>>> 5f10bd9 (	modified:   build/src/aplicacion/CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.o)

bool Registrarse(std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<Admin>& admins);
bool IniciarSesion(const std::vector<Alumno>& alumnos, const std::vector<Profesor>& profesores, const std::vector<Admin>& admins);

<<<<<<< HEAD

>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
=======
bool existeusuario(std::string nombreusuario, std::string contrasena,const std::vector<Alumno>& alumnos, const std::vector<Profesor>& profesores, const std::vector<Admin>& admins);
bool validarDNI(const std::string& dni);
>>>>>>> a20cc29 (Add user validation and improve output formatting in main application)
#endif