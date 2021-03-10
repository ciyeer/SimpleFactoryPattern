#ifndef SHOESFACTORY_H
#define SHOESFACTORY_H
#include "shoes.h"
#include "adidashoes.h"
#include "liningshoes.h"
#include "nikeshoes.h"

enum SHOES_TYPE
{
    NIKE,
    LINING,
    ADIDAS
};

class ShoesFactory
{
public:
    // 根据鞋子类型创建对应的鞋子对象
    Shoes *createShoes(SHOES_TYPE type);
};

#endif // SHOESFACTORY_H
