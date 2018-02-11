#include<iostream>
using namespace std;

//by using recurssion method

int integerNumberLength(int num)
{
    static int counter = 0;
	if(num/10 == 0)
	{
		counter += 1;
		return counter;
	}	
	else
	{
		counter += 1;
		int newNum;
		newNum = num/10;
		return integerNumberLength(newNum);
	}
}

int main()
{
	int number, num;
	cout<<"Enter the number : ";
	cin>>num;
	number = integerNumberLength(num);
	cout<<number<<endl;
	return 0;
}
