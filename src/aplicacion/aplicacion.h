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

//Planes Convalidacion
struct PlanConvalidacion {
    int id;
    std::string universidad_origen;
    std::string universidad_destino;
    std::vector<std::pair<std::string, std::string>> asignaturas_convalidadas; // {asignatura_origen, asignatura_destino}
};

void crearPlanConvalidacion(Admin& admin, std::vector<PlanConvalidacion>& planes);
void guardarPlanesConvalidacion(const std::vector<PlanConvalidacion>& planes);
bool inscribirEnPlanConvalidacion(Alumno& alumno, const std::vector<PlanConvalidacion>& planes);
void mostrarPlanesConvalidacion(const std::vector<PlanConvalidacion>& planes);
void cargarPlanesConvalidacion(std::vector<PlanConvalidacion>& planes);
//

//Menus
void menuAlumno(Alumno& alumno, std::vector<PlanConvalidacion> planes);
void menuProfesor(Profesor& profesor);
void menuAdmin(Admin& admin, std::vector<Alumno>& alumnos, std::vector<Profesor>& profesores, std::vector<PlanConvalidacion> planes);
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

