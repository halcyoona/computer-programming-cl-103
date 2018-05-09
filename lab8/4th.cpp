#include<iostream>
using namespace std;

class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance() : feet(0) , inches(0.0)
		{}
		Distance(int ft, float in) : feet(ft) , inches(in)
		{}
		void getdist()
		{
			cout<<"\nEnter feet : " ; cin >> feet;
			cout<<"Enter inches : " ; cin >> inches;
		}
		void showdist() const 
		{
			cout<<feet<<endl;
			cout<<inches<<endl;
		}
		Distance add_dist(const Distance& d2) const;
};

Distance Distance :: add_dist(const Distance&) const
{
	Distance temp;
	//feet = 0.0;
	//d2.feet = 0;
	temp.inches = inches + d2.inches ;
	if(temp.inches >= 12.0)
	{
		temp.inches -= 12.0;
		temp.feet = 1;
	}
	temp.feet += feet + d2.feet;
	return temp;
}


int main()
{
	Distance dst1, dst2, dst3;
	dst1.getdist();
	dst2.getdist();
	dst3 =dst2.add_dist(dst1);
	
	cout<<d3<<endl;
	
	return 0;
}


