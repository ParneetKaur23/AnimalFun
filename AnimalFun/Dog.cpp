#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"
using namespace ::std;
Dog::Dog(string name, double weight, string breed):Animal(name, weight){
	this -> breed = breed;
}
string Dog::getBreed() const{
	return this->breed;
}
void Dog::digHole() {
	cout << "Yes i dig hole" << endl;
}
void Dog::chaseCat() {
	cout << "Here, Kitty Kitty!!!!" << endl;
}
string Dog::eat() const{
	return "I love dog food";
}
string Dog::makeNoise() const {
	return "Bark";
}