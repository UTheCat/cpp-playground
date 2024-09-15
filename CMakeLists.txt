cmake_minimum_required(VERSION 3.5.0)
project(cpp-stuff VERSION 0.1.0 LANGUAGES C CXX)

file (GLOB SOURCES
src/main/*.hpp
src/main/*.cpp
src/main/console/*.hpp
src/main/console/*.cpp
)

add_executable(${PROJECT_NAME} main.cpp ${SOURCES})

# Set C++ standard
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 23)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_23)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
