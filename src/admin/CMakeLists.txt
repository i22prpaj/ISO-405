add_library(admin admin.cc admin.h)
target_include_directories(admin PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(admin PUBLIC usuario)