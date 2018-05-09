#include<iostream>
using namespace std;

class employee
{

	private:
		int number;
		string name;
		int phone[4];
		float salary;
	
	public:
	
		employee()
		{
			number = 0;
			name = "";
			for(int i = 0; i < 4; i++ )
			{
				phone[i] = 0;
			}
			salary = 0;
		}
		
		employee(num,name,sal)
		{
			number = num ;
			name =	name;
			for(int i = 0; i < 4; i++ )
			{
				phone[i] = 0;
			}
			salary = sal;
		}
		
		~employee()
		{
			number = 0;
			name = "";
			for(int i = 0; i < 4; i++ )
			{
				phone[i] = 0;
			}
			salary = 0;
		}
		
		void inputData(num, name, sal, p[])
		{
			number = num ;
			name = name;
			for(int i = 0; i < 4; i++ )
			{
				phone[i] = p[i];
			}
			salary = sal;
		}
		
		
		void print(num, name, sal, p[])
		{
			cout<< "Number is : " <<num<<endl; ;
			cout<<"Name  is : "<< name<<endl;;
			for(int i = 0; i < 4; i++ )
			{
				cout<<"Phone Number"<<i+1<< "is : "<<phone[i] ;
			}
			cout<<"Salary is : "<<salary;
		}
		
		void updateData(num, name, sal, p[])
		{
			number = num ;
			name = name;
			for(int i = 0; i < 4; i++ )
			{
				phone[i] = p[i];
			}
			salary = sal;
		}
		
		
		
		

};

employee Max(employee e[3])
{
	int count = 0;
	for(int i = 0; i < 3; i++)
	{
		if (e[i].salary > e[i+1].salary)
		{
			employee temp;
			temp = e[i+1];
			e[i+1] = e[i];
			e[i] = temp;   
		}
		
		
		
	}
	
	employee e1 = e[2];
	return e1;
}


int main()
{

	employee e[3];
	for(int i = 0; i < 3; i++ )
	{
		e[i] = 
	}
	employee e1;
	e1 = Max

	return 0;

}
