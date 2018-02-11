#include<iostream>
using namespace std;

int maximium(int num1, int num2, int num3, int num4, int num5)
{
	int num;
	num = num1;
	int array[4];
	array[0] = num2;
	array[1] = num3;
	array[2] = num4;
	array[3] = num5;
	for(int i = 0; i < 4; i++)
	{
		if(num > array[i])
		{
			continue;
		}
		else
		{
			num = array[i];
		}
	}
	return num;
	
}



int main()
{
	int number, num1, num2, num3, num4, num5;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	cout<<"Enter third number : ";
	cin>>num3;
	cout<<"Enter fourth number : ";
	cin>>num4;
	cout<<"Enter fifth number : ";
	cin>>num5;
	number = maximium(num1, num2, num3, num4, num5);
	cout<<number<<endl;
	return 0;
}
