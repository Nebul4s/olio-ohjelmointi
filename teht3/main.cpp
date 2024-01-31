#include <iostream>

using namespace std;
#include "chef.h"
#include "italianchef.h"

int main()
{
    Chef chefObject("Jyrki");
    chefObject.makeSalad();
    chefObject.makeSoup();
    ItalianChef chefObject2("Mario", 250, 100);
    chefObject2.makeSalad();
    chefObject2.makeSoup();
    chefObject2.makePasta();


    return 0;
}
