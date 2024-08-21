//
// Created by Samet on 19.08.2024.
//

#ifndef IPIZZA_H
#define IPIZZA_H



class IPizza {
public:
    virtual ~IPizza() = default;

    virtual void bake() = 0;

    virtual void prepare() = 0;

    virtual void cut() = 0;
};



#endif //IPIZZA_H
