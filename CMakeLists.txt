cmake_minimum_required(VERSION 3.10)
project(ProjectName C)

# Ustawienia kompilatora
set(CMAKE_C_STANDARD 99)

# Ścieżki do plików
include_directories(inc)
file(GLOB SOURCES "src/*.c")

# Dodanie pliku wykonywalnego
add_executable(${PROJECT_NAME} ${SOURCES})

# Testy jednostkowe
add_subdirectory(test)
