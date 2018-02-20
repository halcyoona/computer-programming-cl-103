#include<iostream>
using namespace std;


int max(int a[], int s)
{
	int m = 0;
	int b;
	if (s==0)
	{
		return m;
	}
	
	if (a[s]>a[s-1])
	{
		m = a[s];
	}
	b = max(a,s-1);
	if (m > b)
	{
		return m;
	}
	else
	{
		return b;
	}
}

int main()
{
	int m = 0;
	int a[] ={2,33,12,511,57,97};
	m  = max(a,5);
	cout<<m<<endl;
	return 0;	
}

