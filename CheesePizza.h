//
// Created by Samet on 19.08.2024.
//

#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H
#include <iostream>

#include "IPizza.h"

class CheesePizza : public IPizza {
public:
    void bake() override;
    void prepare() override;
    void cut() override;
};



#endif //CHEESEPIZZA_H
