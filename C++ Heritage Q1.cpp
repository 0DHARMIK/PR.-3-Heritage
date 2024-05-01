#include <iostream>

using namespace std;

class Shape {
public:
    int width,height;
    Shape()
    {
         cout<<"Enter Width =";
		 cin>>width;
		 cout<<"Enter Height =";
		 cin>>height;
		 	
	}
};

class Triangle : public Shape {
public:
	int Triangle;
    void area()
    {
    	Triangle = (width * height) / 2 ;
    	cout<<"Area of Triangle = "<<Triangle<<endl;
	}
};

class Rectangle : public Shape {
public:
    int rectangle;
    void area()
    {
    	rectangle = width * height;
    	cout<<"Area of Rectangle = "<<rectangle<<endl;
	}
};

main() {
    Triangle t;
    Rectangle r;
    
    t.area();
    r.area();
}