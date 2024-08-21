//
// Created by Samet on 19.08.2024.
//

#ifndef ANKARAPIZZASTORE_H
#define ANKARAPIZZASTORE_H
#include <string>

#include "IPizza.h"
#include "PizzaStore.h"


class AnkaraPizzaStore : public PizzaStore {
private:
    IPizza *createPizza(std::string type) override;
};


#endif //ANKARAPIZZASTORE_H
