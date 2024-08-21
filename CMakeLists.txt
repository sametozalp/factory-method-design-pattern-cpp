cmake_minimum_required(VERSION 3.28)
project(factory)

set(CMAKE_CXX_STANDARD 17)

add_executable(factory main.cpp
        IPizza.cpp
        IPizza.h
        CheesePizza.cpp
        CheesePizza.h
        VeggiPizza.cpp
        VeggiPizza.h
        PizzaStore.cpp
        PizzaStore.h
        AnkaraPizzaStore.cpp
        AnkaraPizzaStore.h)
