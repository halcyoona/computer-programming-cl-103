#include<iostream>
using namespace std;

void rotate(int &a, int &b, int &c, int &d, int &e)
{
	int temp;
	temp = a;
	a = b; 
	b = c;
	c = d;
	d = e;
	e = temp;
}

int main()
{	
	int a = 4, b = 5, c = 6, d = 7, e = 8;
	rotate(a, b, c, d, e);
	cout<<a<<b<<c<<d<<e<<endl;
	return 0;
}
