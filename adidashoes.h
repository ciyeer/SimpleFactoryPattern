#ifndef ADIDASHOES_H
#define ADIDASHOES_H
#include "shoes.h"
#include <iostream>


class AdidaShoes : public Shoes
{
public:
    virtual void show() override
    {
        std::cout << "Impossible is nothing" << std::endl;
    }
};

#endif // ADIDASHOES_H
