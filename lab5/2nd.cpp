#include<iostream>
using namespace std;


int wordCount(string s, int size)
{
	int c = 0;
	if (size == 0)
	{
		return 1;
	}
	
	if (int (s[size]) == 32)
	{
		 c++;
	}
	return c + wordCount(s,size-1);
}


int main()
{

	int s = 0; 
	s = wordCount("hello word pakistan indai",24);
	cout<<s<<endl;
	return 0;
}
