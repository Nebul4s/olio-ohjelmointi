#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string x, int flower, int water);
    string getName();
    void makePasta();
    int getFlower() const;

private:
    int flower = 250;
    int water = 100;
};

#endif // ITALIANCHEF_H
