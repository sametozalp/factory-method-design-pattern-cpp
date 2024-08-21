#include "AnkaraPizzaStore.h"

#include "CheesePizza.h"
#include "VeggiPizza.h"

IPizza *AnkaraPizzaStore::createPizza(std::string type) {
    if (type == "cheese")
        return new CheesePizza();
    else if (type == "veggi")
        return new VeggiPizza();
    else
        throw std::invalid_argument("error");
}
