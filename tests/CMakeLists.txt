# GTest include code for fetch content over the internet 
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main gmock_main)
# End GTest include code

# Testing libraries
#add_executable(usuario-test usuario-test.cc)
#target_link_libraries(usuario-test
# PRIVATE GTest::GTest usuario)
#add_test(usuario-gtests usuario-test)
#
#add_executable(alumno-test alumno-test.cc)
#target_link_libraries(alumno-test
# PRIVATE GTest::GTest alumno)
#add_test(alumno-gtests alumno-test)
#
#add_executable(profesor-test profesor-test.cc)
#target_link_libraries(profesor-test
# PRIVATE GTest::GTest profesor)
#add_test(profesor-gtests profesor-test)

add_executable(aplicacion-test aplicacion-test.cc)
target_link_libraries(aplicacion-test
 PRIVATE GTest::GTest aplicacion)
add_test(aplicacion-gtests aplicacion-test)

# Testing basket library
 #add_executable(basket-test basket-test.cc)
 #target_link_libraries(basket-test
 # PRIVATE GTest::GTest basket product tv computer)
 #add_test(basket_gtests basket-test)
