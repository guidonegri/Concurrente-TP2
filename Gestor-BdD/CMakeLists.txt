cmake_minimum_required(VERSION 3.6)
project(Gestor_BdD)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/Main.cpp include/ipc/Cola.h include/Persona.h src/ipc/Semaforo.cpp include/ipc/Semaforo.h)
add_executable(Gestor_BdD ${SOURCE_FILES})