#include<iostream>
using namespace std;

class vehicle
{
	protected:
		int tire;
		int size;
		int seat;
	public:
		vehicle(int t = 0, int si = 0, int se = 0 )
		{
			tire = t;
			size = si;
			seat = se;
			cout<<"Vehicle constructor called "<<endl;
		}
		
		~vehicle()
		{
			tire = 0;
			size = 0;
			seat = 0;
			cout<<"Vehicle Deconstructor called "<<endl;
		}
		
		void setTire(int t)
		{
			tire = t;
		}
		
		void setSize(int si)
		{
			size = si;
		}
		
		void setSeat(int se)
		{
			seat = se;
		}
		
		int getTire()
		{
			return tire;
		}
		
		
		int getSize()
		{
			return size;
		}
		
		
		int getSeat()
		{
			return seat;
		}
		
		void printTire()
		{
			cout<<"Tires are : "<<tire<<endl;
		}
		
		
		void printSize()
		{
			cout<<"Size is : "<<size<<endl;
		}
		
		void printSeat()
		{
			cout<<"Seats are : "<<seat<<endl;
		}
};

class car: public vehicle
{
	protected:
		string color;
	public:
		car(string c = ""):vehicle(4,2)
		{
			color = c;
			cout<<"Car constructor called : "<<endl;	
		}
		
		~car()
		{
			color = "";
			cout<<"Car destructor called : "<<endl;
		}
		
		void setColor(string c)
		{
			color = c;
		}
		
		string getColor()
		{
			return color;
		}
		
		void printColor()
		{
			cout<<"Color is : "<<color<<endl;
		}
};


class vitz:public car
{
	protected:
		int model;
		int plateNumber;
	public:
		vitz(int m = 0, int n = 0):car("black")
		{
			model = m;
			plateNumber = n;
			cout<<"vitz constructor called"<<endl;
		}
		
		~vitz()
		{
			model = 0;
			plateNumber = 0;
			cout<<"vitz destructor called"<<endl;
		}
		
		void setModel(int m )
		{
			model = m;
		}
		
		void setPlateNumber(int n )
		{
			plateNumber = n;
		}
		
		int getModel()
		{
			return model;
		}
		
		int getPlateNumber()
		{
			return plateNumber;
		}
		
		void printModel()
		{
			cout<<"Model is : "<<model<<endl;
		}

		void printPlateNumber()
		{
			cout<<"Plate Number is  : "<<plateNumber<<endl;
		}
		
};



int main()
{

	vitz v1;
	v1.setTire(4);
	v1.setSeat(5);
	v1.setSize(11);
	v1.setColor("Red");
	v1.setModel(3);
	v1.setPlateNumber(1234);
	v1.printTire();
	v1.printSeat();
	v1.printSize();
	v1.printColor();
	v1.printModel();
	v1.printPlateNumber();
	return 0;
}
