#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
int main() {
	Animal *obj = new Cat("Kitty", 30.0);
	//((Cat*)obj) -> chaseMouse();
	(reinterpret_cast<Cat*>(obj)) -> chaseMouse();
	cout << obj -> eat() << endl;
	cout << obj -> makeNoise() << endl;
	delete obj;
	obj = NULL;
	return 0;
}