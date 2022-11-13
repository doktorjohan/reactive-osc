cmake_minimum_required(VERSION 3.23)
project(reactive)

set(CMAKE_CXX_STANDARD 14)

include_directories(includes)

add_executable(main_debug main.cpp)
add_library(reactive STATIC main.cpp includes/vehicle.cpp includes/vehicle.h includes/vehiclePhysics.cpp)

find_library(REACTIVE_LIBRARY reactive lib)
target_link_libraries(main_debug LINK_PUBLIC ${REACTIVE_LIBRARY})