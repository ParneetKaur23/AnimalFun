#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include "Animal.h"
using namespace ::std;
class Dog : public Animal{
public:
Dog(string name, double weight, string breed);
string getBreed() const;
void digHole();
void chaseCat();
string makeNoise() const;
string eat() const;
private:
	string breed;
};
#endif