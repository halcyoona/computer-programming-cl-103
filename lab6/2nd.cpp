#include<iostream>
using namespace std;

class Number 
{
	private:
		int a[32];
		
		
	public:
	
		Number()
		{
			cout<< "---------------------- Constructor called ------------------------- "<<endl;
			for(int i = 0; i < 32; i++)
			{
				a[i] = 0;
			}
			
		}
		
		Number(int arr[])
		{
			cout<< "---------------------- Constructor called ------------------------- "<<endl;
			for(int i = 0; i < 32; i++)
			{
				a[i] = arr[i];
			}
			
		}
		
		~Number()
		{
			cout<<"------------------- Destructor called -------------------"<<endl;
			for(int i = 0; i < 32; i++)
			{
				a[i] = 0;
			}
		}
		
		void set(int val, int index)
		{
			if (index < 32) 
				a[index] = val;
			else
				cout<<"Plz enter correct index"<<endl;
		}
		
		void clear(int index)
		{
			if (index < 32) 
				a[index] = 0;
			else
				cout<<"Plz enter correct index"<<endl;
		}
		
		int test(int num)
		{	
			
			for(int i = 0; i < 32; i++)
			{
				if (num == a[i])
				{	
					cout<<"Is present "<<endl;
					return i;
				}
				else
				{
					cout<<"Not present : ";
					return 0;
				}
			}
		}
		void print ()
		{
			for(int i = 0; i < 32; i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
};


int main()
{
	int arr[32] = {3,4,5,6,7,4,5,67,8,99,3,4,52,3,4,56,4,5,2,3,1,2,3,4,56,4,3,21,2,4};
	Number n1(arr);
	int num;
	n1.set(21,33);
	num = n1.test(21);
	cout<<num<<endl;
	n1.print();
	n1.clear(5);
	n1.print();
	return 0;

}


