//============================================================================
// Name        : interface.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Shape {        // Should act like an abstract class or interface.

	public:

	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
	virtual void setData(float radius) = 0;
    /* Define two pure virtual functions: getArea() and getPerimeter(). */
};

class Rectangle : public Shape {

    float s1, s2;
	double getArea(){
    	return s1*s2;
    }

    double getPerimeter(){
    	return 2*(s1+s2);
    }

};


class Circle : public Shape {

    float radius;

public:

    void setData(float radius){
    	this->radius = radius;
    }

    double getArea(){
    	return 3.14*radius*radius;
    }

    double getPerimeter(){
    	return 2*3.142*radius;
    }

};

int main() {

/* Create any one object among the
     * class Square, Rectangle, Circle, or Triangle and
     * print the area and perimeter. */

	//Circle c1;
	//c1.setData(3.45);
	//cout<<c1.radius;
	//cout<<c1.getArea();

	Shape *baseP = new Circle();
	baseP->setData(10);
	cout<<(baseP->getArea());


    return 0;
}
