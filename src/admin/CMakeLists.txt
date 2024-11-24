add_library(admin admin.cc admin.h)
<<<<<<< HEAD
target_link_libraries(admin PUBLIC usuario)
target_include_directories(admin PUBLIC ${CMAKE_CURRENT_LIST_DIR})
=======
target_include_directories(admin PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(admin PUBLIC usuario)
>>>>>>> f39fc08 (Add CMake configuration files and progress markers for various modules)
