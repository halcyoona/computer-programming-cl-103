#include<iostream>
using namespace std;

class shape
{
	protected:
		string color;
	public:
		shape()
		{
			cout<<"shape constructor is called"<<endl;
		}
		
		~shape()
		{
			cout<<"shape destructor is called"<<endl;
		}
		virtual void print() = 0;
};

class d2Shape:public shape
{
	public:
		d2Shape():shape()
			{
				cout<<"d2Shape constructor is called"<<endl;
			}
		~d2Shape()
			{
				cout<<"d2Shape destructor is called"<<endl;
			}
		virtual int area() = 0;
		virtual int perimeter() = 0;
};

class d3Shape:public shape
{
	public: 
		d3Shape():shape()
			{
				cout<<"d3Shape constructor is called"<<endl;
			}
		~d3Shape()
			{
				cout<<"d3Shape destructor is called"<<endl;
			}
		virtual int volume() = 0;
};

class sphere:public d3Shape
{
	private:
		int radius;
		int center;
	public:
		sphere(int r = 0, int ce = 0, string co = ""):d3Shape()
		{
			radius = r;
			center = ce;
			color = co;
		}
		~sphere()
		{
			cout<<"sphere destructor is called"<<endl;
		}
		int volume()
		{
			return  3.14 *(radius * radius * radius);
		}
		
		void print()
		{
			cout<<"Center = "<<center<<endl;
			cout<<"Radius = "<<radius<<endl;
			cout<<"Color = "<<color<<endl; 
		}
};

class pyramid:public d3Shape
{
	private:
		int x;
		int y; 
		int z;
	public:
		pyramid(int x = 0, int y = 0, int z = 0, string co = ""):d3Shape()
		{
			this -> x = x;
			this -> y = y;
			this -> z = z;
			color = co;
		}
		~pyramid()
		{
			cout<<"pyramid destructor is called"<<endl;
		}
		int volume()
		{
			return  x*y*z;
		}
		
		void print()
		{
			cout<<"X = "<<x<<endl;
			cout<<"Y = "<<y<<endl;
			cout<<"Z = "<<z<<endl;
			cout<<"Color = "<<color<<endl; 
		}
};
class circle:public d2Shape
{
	private:
		int radius;
		int center;
	public:
		circle(int r = 0, int ce = 0, string co = ""):d2Shape()
		{
			radius = r;
			center = ce;
			color = co;
		}
		~circle()
		{
			cout<<"sphere destructor is called"<<endl;
		}
		int area()
		{
			return 2*3.14*(radius*radius);
		}
		int perimeter()
		{
			return 2*3.14*radius;
		}
		void print()
		{
			cout<<"Center = "<<center<<endl;
			cout<<"Radius = "<<radius<<endl;
			cout<<"Color = "<<color<<endl; 
		}
		
};
	
class rectangle:public d2Shape
{
	private:
		int width;
		int length;
	public:
		rectangle(int w = 0, int l = 0, string c = ""):d2Shape()
		{
			width = w;
			length = l;
			color = c;
		}
		~rectangle()
		{
			cout<<"rectangle destructor is called"<<endl;
		}
		int area()
		{
			return width * length;
		}
		int perimeter()
		{
			return 2*width*length;
		}
		void print()
		{
			cout<<"width = "<<width<<endl;
			cout<<"length = "<<length<<endl;
			cout<<"color = "<<color<<endl;
		}
};



int main()
{
	/*
	rectangle *r = new rectangle(2,3,"black");
	cout<<r->area()<<endl;
	cout<<r->perimeter()<<endl;
	r->print();
	circle *c = new circle(5,4,"blue");
	cout<<c->area()<<endl;
	cout<<c->perimeter()<<endl;
	c->print();
	sphere *s = new sphere(3,4,"red");
	cout<<s->volume()<<endl;
	s->print();
	pyramid *p = new pyramid(1,2,3,"green");
	cout<<p->volume()<<endl;
	p->print();
	*/
	/*
	rectangle *r = new rectangle(2,3,"black");
	cout<<*(r).area()<<endl;
	cout<<*(r).perimeter()<<endl;
	*(r).print();
	circle *c = new circle(5,4,"blue");
	cout<<*(c).area()<<endl;
	cout<<*(c).perimeter()<<endl;
	*(c).print();
	sphere *s = new sphere(3,4,"red");
	cout<<*(s).volume()<<endl;
	*(s).print();
	pyramid *p = new pyramid(1,2,3,"green");
	cout<<*(p).volume()<<endl;
	*(p).print();
	return 0;
	*/
	d2Shape *r = new rectangle(2,3,"black");
	cout<<r->area()<<endl;
	cout<<r->perimeter()<<endl;
	r->print();
	d2Shape *c = new circle(5,4,"blue");
	cout<<c->area()<<endl;
	cout<<c->perimeter()<<endl;
	c->print();
	d3Shape *s = new sphere(3,4,"red");
	cout<<s->volume()<<endl;
	s->print();
	d3Shape *p = new pyramid(1,2,3,"green");
	cout<<p->volume()<<endl;
	p->print();
	delete r;
	delete c;
	delete s;
	delete p;
	
}
