#include <iostream>
#include "shoesfactory.h"
#include "shoes.h"
using namespace std;

int main()
{
    // 构造工厂对象
    ShoesFactory *pShoesFactory = new ShoesFactory;

    // Nike 鞋展示
    Shoes *pNikeShoes = pShoesFactory->createShoes(NIKE);
    if(!pNikeShoes)
        return 0;
    pNikeShoes->show();
    delete pNikeShoes;
    pNikeShoes = nullptr;

    // LiNing 鞋展示
    Shoes *pLiNingShoes = pShoesFactory->createShoes(LINING);
    if(!pLiNingShoes)
        return 0;
    pLiNingShoes->show();
    delete pLiNingShoes;
    pLiNingShoes = nullptr;

    // Adidas 鞋展示
    Shoes *pAdidasShoes = pShoesFactory->createShoes(ADIDAS);
    if(!pAdidasShoes)
        return 0;
    pAdidasShoes->show();
    delete pAdidasShoes;
    pAdidasShoes = nullptr;

    return 0;
}
