#include "shoesfactory.h"

Shoes *ShoesFactory::createShoes(SHOES_TYPE type)
{
    switch (type)
    {
    case NIKE:
        return new NikeShoes();
        break;
    case LINING:
        return new LiNingShoes();
        break;
    case ADIDAS:
        return new AdidaShoes();
        break;
    default:
        return nullptr;
        break;
    }
}
