add_library(alumno alumno.cc alumno.h)
target_link_libraries(alumno PUBLIC usuario)
target_include_directories(alumno PUBLIC ${CMAKE_CURRENT_LIST_DIR})