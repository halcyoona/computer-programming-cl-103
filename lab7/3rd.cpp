#include<iostream>
using namespace std;

class date 
{

	private:
		int yr;
		int mon;
		int day;
	
	public:
	
		date()
		{
			yr = 0;
			mon = 0;
			day = 0;
		}
		
		date(int m, int d, int y)
		{
			yr = y;
			mon = m;
			day = d;
		}
		
		
		~date()
		{
			yr = 0;
			mon = 0;
			day = 0;
		}
		
		void initialize(int m, int d, int y)
		{
			yr = y;
			mon = m;
			day = d;
		}
		
		void print()
		{
			cout<<"Date is : "<<mon<<"/"<<day<<"/"<<yr<<endl;
		}
		
		void update(int m, int d, int y)
		{
			yr = y;
			mon = m;
			day = d;
		}
		
		void inputDate(int m, int d, int y)
		{
			yr = y;
			mon = m;
			day = d;
		}
		
		void showDate()
		{
			cout<<"Date is : "<<mon<<"/"<<day<<"/"<<yr<<endl;
		}
		
		
		
		
		

};


int main()
{

	date d;
	
	d.initialize(3,4,5);
	d.inputDate(2,26,2018);
	d.showDate();

	return 0;

}
