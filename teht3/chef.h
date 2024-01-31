#ifndef CHEF_H
#define CHEF_H
using namespace std;
#include <iostream>
#include <string>

class Chef
{
public:
    Chef(string newName);
    ~Chef();
    void makeSalad();
    void makeSoup();
protected:
    string name;
};

#endif // CHEF_H
