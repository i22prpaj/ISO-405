add_library(alumno alumno.cc alumno.h)
<<<<<<< HEAD
target_link_libraries(alumno PUBLIC usuario)
target_include_directories(alumno PUBLIC ${CMAKE_CURRENT_LIST_DIR})
=======
target_include_directories(alumno PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(alumno PUBLIC usuario)
>>>>>>> f39fc08 (Add CMake configuration files and progress markers for various modules)
