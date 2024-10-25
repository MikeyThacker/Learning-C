cmake_minimum_required(VERSION 3.29)
project(CLion_Projects C)

set(CMAKE_C_STANDARD 11)

add_executable(CLion_Projects
        HelloWorld.c
        DataTypes.c
        ConditionalStatements.c
        Pointers.c
        Arrays.c
        Strings.c
        MemoryManagement.c
        main.c
)
