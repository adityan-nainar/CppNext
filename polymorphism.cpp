//============================================================================
// Name        : polymorphism.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
class animal{
	public:
		int age;

		animal(int age){
			this->age = age;
			cout<<"object created";
		}

		virtual int sound(){
			cout<<"make noiseee";
			return 0;
		}

};

class dog : public animal{
	public:
		int sound(){
			cout<<"Barkk";
			return 0;
		}
};

class cat : public animal{
	public:
		int sound(){
			cout<<"Meoww";
			return 0;
		}
};

int main() {

	dog d1;
	cat c1;

	animal *point[2];

	point[0] = &d1;
	point[1] = &c1;

	point[0]->sound();
	cout<<endl;
	point[1]->sound();

	return 0;

}
*/

class Animal { 		//A class with at least one pure virtual function is an abstract class

	public:
		virtual void sound() = 0; // Pure Virtual Function
								// Must be overridden in the child classes
		/*{
			cout << "Animal class: making sound" << endl;
		}*/

		virtual void sleep() {
			cout << "Animal class: sleeping" << endl;
		}
};

class Animal { 		//A class with only pure virtual functions is an interface

	public:
		virtual void sound() = 0;

		virtual void sleep() = 0;
};


class Dog : public Animal {   // class inheriting from an abstract class is a Concrete class

	public:
		void sound() {
			cout << "Dog class: bow-bow" << endl;
		}

		void sleep() {
			cout << "Dog class: sleeping" << endl;
		}
};


int main() {

	Dog dog;		// dog --> Dog object
	dog.sound();
	dog.sleep();

	Animal *animal = new Dog();		// animal --> Dog object
	animal->sound();
	animal->sleep();

	//Animal animal;   objects cannot be instantiated of an abstract class, but pointers can be

	return 0;
}

