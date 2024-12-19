#include "aplicacion.h"
#include <gtest/gtest.h>

// Mock classes for testing
class MockAlumno : public Alumno {
public:
    MockAlumno(const std::string& dni, const std::string& nombre, const std::string& apellidos, const std::string& sexo, int edad, int consulta, const std::string& nombre_usuario, const std::string& contrasena, const std::string& carrera, const std::vector<std::string>& asignaturas, int cuatrimestre, int curso, int matricula, const std::vector<std::string>& universidad)
        : Alumno(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena, carrera, asignaturas, cuatrimestre, curso, matricula, universidad) {}
};

class MockProfesor : public Profesor {
public:
    MockProfesor(const std::string& dni, const std::string& nombre, const std::string& apellidos, const std::string& sexo, int edad, int consulta, const std::string& nombre_usuario, const std::string& contrasena, const std::vector<std::string>& universidad)
        : Profesor(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena, universidad) {}
};

class MockAdmin : public Admin {
public:
    MockAdmin(const std::string& dni, const std::string& nombre, const std::string& apellidos, const std::string& sexo, int edad, int consulta, const std::string& nombre_usuario, const std::string& contrasena)
        : Admin(dni, nombre, apellidos, sexo, edad, consulta, nombre_usuario, contrasena) {}
};

// Test cases for menuAlumno
TEST(MenuAlumnoTest, TestInscribirseSICUE) {
    std::vector<std::string> universidades(5, "universidad");
    std::vector<std::string> asignaturas(6, "asignatura");
    MockAlumno alumno("12345678A", "John", "Doe", "M", 20, 0, "johndoe", "password", "Computer Science", asignaturas, 1, 1, 1, universidades);

    planSICUE(alumno);
    EXPECT_EQ(alumno.GetConsulta(), 1);
}

TEST(MenuAlumnoTest, TestInscribirsePlanConvalidacion) {
    std::vector<std::string> universidades(5, "universidad");
    std::vector<std::string> asignaturas(6, "asignatura");
    MockAlumno alumno("12345678A", "John", "Doe", "M", 20, 1, "johndoe", "password", "Computer Science", asignaturas, 1, 1, 1, universidades);

    plandeConvalidacion(alumno);
    EXPECT_EQ(alumno.GetConsulta(), 2);
}

TEST(MenuAlumnoTest, TestConsultarConvalidacion) {
    std::vector<std::string> universidades = {"uni1", "uni2", "uni3", "uni4", "uni5"};
    std::vector<std::string> asignaturas = {"asig1", "asig2", "asig3", "asig4", "asig5", "asig6"};
    MockAlumno alumno("12345678A", "John", "Doe", "M", 20, 2, "johndoe", "password", "Computer Science", asignaturas, 1, 1, 1, universidades);

    consultarConvalidacion(alumno);
    EXPECT_EQ(alumno.GetConsulta(), 2);
}

TEST(MenuAlumnoTest, TestAnularInscripcion) {
    std::vector<std::string> universidades = {"uni1", "uni2", "uni3", "uni4", "uni5"};
    std::vector<std::string> asignaturas = {"asig1", "asig2", "asig3", "asig4", "asig5", "asig6"};
    MockAlumno alumno("12345678A", "John", "Doe", "M", 20, 2, "johndoe", "password", "Computer Science", asignaturas, 1, 1, 1, universidades);

    anularInscripcion(alumno);
    EXPECT_EQ(alumno.GetConsulta(), 0);
}

// Test cases for menuProfesor
TEST(MenuProfesorTest, TestSICUEProfesor) {
    std::vector<std::string> universidades(5, "universidad");
    MockProfesor profesor("12345678A", "Jane", "Doe", "F", 30, 0, "janedoe", "password", universidades);

    SICUEprofesor(profesor);
    EXPECT_EQ(profesor.GetConsulta(), 1);
}

TEST(MenuProfesorTest, TestConsultarEstadoSolicitud) {
    std::vector<std::string> universidades = {"uni1", "uni2", "uni3", "uni4", "uni5"};
    MockProfesor profesor("12345678A", "Jane", "Doe", "F", 30, 1, "janedoe", "password", universidades);

    consultarEstadoSolicitud(profesor);
    EXPECT_EQ(profesor.GetConsulta(), 1);
}

TEST(MenuProfesorTest, TestAnularInscripcionProfesor) {
    std::vector<std::string> universidades = {"uni1", "uni2", "uni3", "uni4", "uni5"};
    MockProfesor profesor("12345678A", "Jane", "Doe", "F", 30, 1, "janedoe", "password", universidades);

    anularInscripcionProfesor(profesor);
    EXPECT_EQ(profesor.GetConsulta(), 0);
}

// Test cases for menuAdmin
TEST(MenuAdminTest, TestConsultarSolicitudesEnProceso) {
    std::vector<std::string> universidades(5, "universidad");
    std::vector<std::string> asignaturas(6, "asignatura");
    MockAlumno alumno("12345678A", "John", "Doe", "M", 20, 1, "johndoe", "password", "Computer Science", asignaturas, 1, 1, 1, universidades);
    MockProfesor profesor("12345678A", "Jane", "Doe", "F", 30, 1, "janedoe", "password", universidades);
    MockAdmin admin("87654321B", "Admin", "User", "M", 40, 0, "adminuser", "adminpass");

    std::vector<Alumno> alumnos = {alumno};
    std::vector<Profesor> profesores = {profesor};

    consultarSolicitudesenProceso(admin, alumnos, profesores);
    EXPECT_EQ(alumno.GetConsulta(), 1);
    EXPECT_EQ(profesor.GetConsulta(), 1);
}

TEST(MenuAdminTest, TestAnularInscripcionAdmin) {
    std::vector<std::string> universidades(5, "universidad");
    std::vector<std::string> asignaturas(6, "asignatura");
    MockAlumno alumno("12345678A", "John", "Doe", "M", 20, 1, "johndoe", "password", "Computer Science", asignaturas, 1, 1, 1, universidades);
    MockProfesor profesor("12345678A", "Jane", "Doe", "F", 30, 1, "janedoe", "password", universidades);
    MockAdmin admin("87654321B", "Admin", "User", "M", 40, 0, "adminuser", "adminpass");

    std::vector<Alumno> alumnos = {alumno};
    std::vector<Profesor> profesores = {profesor};

    anularInscripcionAdmin(admin, alumnos, profesores);
    EXPECT_EQ(alumno.GetConsulta(), -1);
    EXPECT_EQ(profesor.GetConsulta(), -1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}