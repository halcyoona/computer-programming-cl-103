#include<iostream>
using namespace std;

class counter
{
	private:
		static int count;
	public:
		
		counter()
		{	
			
			if(count > 3)
			{
				cout<<"can not be created"<<endl;
				return ;
			} 
			else
			{
				counter::count += 1;
				cout<<"Object "<<count<<" is created"<<endl;
			}
		}
		void working()
		{
			cout<<"working on Object "<<count<<endl;
		}
		~counter()
		{	
			cout<<"Object "<<counter::count<<" is deleted"<<endl;
			counter::count -= 1; 
		}
		
};

int counter::count = 0;


int main()
{
	counter c1,c2,c3,c4,c5;
	return 0;

}
