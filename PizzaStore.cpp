//
// Created by Samet on 19.08.2024.
//

#include "PizzaStore.h"


IPizza *PizzaStore::orderPizza(std::string type) {
    IPizza *pizza = createPizza(type);

    pizza->bake();
    pizza->prepare();
    pizza->cut();

    return pizza;
}