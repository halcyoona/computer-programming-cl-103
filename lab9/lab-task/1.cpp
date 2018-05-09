#include<iostream>
using namespace std;

class LIST
{
	private:
		int arr[10];
	public:
		LIST(int array[10])
		{
			for(int i = 0; i < 10; i++)
			{
				arr[i] = array[i];
			}
		}
		
		
		LIST()
		{
			for(int i = 0; i < 10; i++)
			{
				arr[i] = 0;
			}
		}
		
		void setValues(int array[10])
		{
			for(int i = 0; i < 10; i++)
			{
				arr[i] = array[i];
			}
		}
		
		void printValues()
		{
			for(int i = 0; i < 10; i++)
			{
				cout<<"Value at index "<<i<<" is : " <<arr[i]<<endl;
			}
		}
		
		~LIST()
		{
			for(int i = 0; i < 10; i++)
			{
				arr[i] = 0;
			}
		}
		
		
		LIST operator +(LIST lst)
		{	
			int temp[10];
			LIST lst1;
			for(int i = 0; i < 10; i++)
			{
				temp[i] = arr[i] + lst.arr[i];
			}
			lst1.setValues(temp);
			return lst1;
		}
		
		LIST operator *(LIST lst)
		{	
			int temp[10];
			LIST lst1;
			for(int i = 0; i < 10; i++)
			{
				temp[i] = arr[i] * lst.arr[i];
			}
			lst1.setValues(temp);
			return lst1;
		}
		
		
		LIST operator ++()
		{
			int temp[10];
			LIST lst1;
			for(int i = 0; i < 10; i++)
			{
				 temp[i] = arr[i] + 1; 
			}
			lst1.setValues(temp);
			setValues(temp);
			return lst1;	
		}
		
		bool operator ==(LIST lst)
		{
			for(int i = 0; i < 10; i++)
			{
				if(arr[i] == lst.arr[i])
				{
					continue;
				} 
				else
				{
					return false;
				}
			}
			return true;
		}
};


int main()
{	
	int ar1[10] = {1,2,3,4,5,6,7,8,9,10};
	int ar2[10] = {1,2,3,4,5,6,7,8,9,10};
	LIST lst3,lst1(ar1),lst2(ar2);
	lst3 = lst1 + lst2;
	lst3 = lst1 * lst2;
	//++lst1;
	lst1.printValues();
	lst3.printValues();
	if(lst1 == lst2)
	{
		cout<<"Equal"<<endl;
	}
	else
	{
		cout<<"Unequal"<<endl;
	}
	return 0;
}


