<<<<<<< HEAD
<<<<<<< HEAD
add_library(aplicacion aplicacion.cc aplicacion.h)
=======
add_library(aplicacion aplicacion.h)
>>>>>>> 25f6136 (	modified:   src/admin/admin.h)
=======
add_library(aplicacion aplicacion.cc aplicacion.h)
>>>>>>> c7b3a37 (	modified:   build/CMakeFiles/Makefile.cmake)
target_link_libraries(aplicacion PUBLIC usuario)
target_link_libraries(aplicacion PUBLIC alumno)
target_link_libraries(aplicacion PUBLIC profesor)
target_link_libraries(aplicacion PUBLIC admin)
target_include_directories(aplicacion PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_executable(aplicacion-main aplicacion-main.cc)
target_link_libraries(aplicacion-main PUBLIC aplicacion)