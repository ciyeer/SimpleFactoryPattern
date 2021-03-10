#ifndef LININGSHOES_H
#define LININGSHOES_H
#include "shoes.h"
#include <iostream>

class LiNingShoes : public Shoes
{
public:
    virtual void show() override
    {
        std::cout << "Everything is possible" << std::endl;
    }
};

#endif // LININGSHOES_H
