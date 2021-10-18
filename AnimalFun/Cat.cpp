#include "Cat.h"
#include <iostream>
#include <string>
using namespace ::std;
Cat :: Cat(string name, double weight):Animal(name, weight){
}
void Cat::chaseMouse() const{
	cout << "I am chasing a mouse!!!" << endl;
}
string Cat::eat() const {
	return "Tasty Kitty Food!!";
}
string Cat::makeNoise() const {
	return "Meow!!!";
}