set(BINARY ${CMAKE_PROJECT_NAME})

add_executable(${BINARY}_run main.cpp sumOfNaturalsDivisibleBy3And5.hpp)

add_library(${BINARY}_lib STATIC main.cpp sumOfNaturalsDivisibleBy3And5.hpp)
