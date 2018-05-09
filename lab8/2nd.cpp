#include<iostream>
using namespace std;

class counter
{
	private:
		int count;
		string str;
	public:
		counter()
		{	
			count++;
			cout<<"Object "<<count<<" is created"<<endl; 
		}
		

};


int main()
{
	counter c1,c2;
	return 0;

}
