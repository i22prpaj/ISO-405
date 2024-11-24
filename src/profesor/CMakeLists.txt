add_library(profesor profesor.cc profesor.h)
target_include_directories(profesor PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(profesor PUBLIC usuario)