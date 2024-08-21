//
// Created by Samet on 19.08.2024.
//

#ifndef VEGGIPIZZA_H
#define VEGGIPIZZA_H
#include <iostream>
#include <ostream>

#include "IPizza.h"


class VeggiPizza : public IPizza {
public:
    void bake() override;

    void prepare() override;

    void cut() override;
};


#endif //VEGGIPIZZA_H
