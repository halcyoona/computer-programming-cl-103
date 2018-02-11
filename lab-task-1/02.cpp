#include<iostream>
using namespace std;

bool prime(int num); // prototype

bool isPrime(int num)
{
	bool b = prime(num);
	if(b == 1)
	{
		int x = 11;
		while(num >= x*x)
		{
			x = x + 2;
			if(num == x*x)
			{
				return false;
			}
		}
		return true;	
	}
	else
	{
		return false;
	}
}

bool prime(int num)
{
	if(num <= 1)
	{
		return false;
	}
	else
	{
		if(num == 2 || num == 3 || num == 5 || num == 7 || num == 11)
		{
			return true;
		}
		if(num % 2 == 0)
		{
			return false;
		}
		if(num % 3 == 0)
		{
			return false;
		}
		if(num % 5 == 0)
		{
			return false;
		}
		if(num % 7 == 0)
		{
			return false;
		}
		if(num % 11 == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

void printPrime(int n)
{
	if(n == 1)
	{
		cout<<2<<endl;
		return;
	}
	else
	{
		int b = 1;
		cout<<2<<" ";
		int i = 1;
		while( i < n )
		{
			b = b + 2;
			if (isPrime(b) == 1)
			{
				cout<<b<<" ";
				i = i+1;
				
			}
		}
		return;
	}
}

int main()
{
    int num,x;
    cout<<"Enter Number : ";
    cin>>num;
	x = isPrime(num);
	cout<<x<<endl;
	printPrime(100);
	return 0;
}
