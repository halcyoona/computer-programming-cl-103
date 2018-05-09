#include<iostream>


class Point
{
int x, y;
public:
	Point() {
	}
	Point(const Point& p);
	// copy constructor
	};
Point::Point(const Point& p) 
{ 	
	x = p.x;
	y = p.y;
}

class Array
{
private:
    int * _arr;
    int _size;
public:
    Array();
    Array(int size);
    Array(const Array& obj);  // copy constructor
    ~Array();
    void readInValues();
    void mult(int num);
    void add(int num);
    void printArray();
};

Array::Array( const Array &obj )
{
    _arr = new int[_size];

    for(int i=0;i<_size;i++)
        _arr[i] = obj._arr[i];
}



void main()
{
	Point p;
	// calls default constructor
	Point s = p;
	// calls copy constructor.
	p = s;
	// assignment, not copy constructor.
}
