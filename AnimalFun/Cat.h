#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "Animal.h"
using namespace ::std;
class Cat : public Animal{
public:
	Cat(string name, double weight);
    void chaseMouse() const;
	string eat() const;
	string makeNoise() const;
};
#endif