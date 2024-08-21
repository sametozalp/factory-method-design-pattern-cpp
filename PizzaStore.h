//
// Created by Samet on 19.08.2024.
//

#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include <iostream>
#include "IPizza.h"

class PizzaStore {
private:
    virtual IPizza *createPizza(std::string type) = 0;

public:
    virtual ~PizzaStore() = default;
    IPizza *orderPizza(std::string type);
};


#endif //PIZZASTORE_H