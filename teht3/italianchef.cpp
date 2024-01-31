#include "italianchef.h"

ItalianChef::ItalianChef(string name, int newFlower, int newWater) : Chef(name) {
    flower = newFlower;
    water = newWater;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<name<<" uses flower = "<<flower<<endl;
    cout<<"Chef "<<name<<" uses water = "<<water<<endl;
}

