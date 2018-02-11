#include<iostream>
using namespace std;

int pentagonal(int num)
{
	for(int i = 1; i <= num; i++)
	{
		long term = i*(((3*i)-1)/2);
		cout<<term<<"   ";
	}
	return 0;
}

int main()
{
	pentagonal(2);
	return 0;
}
