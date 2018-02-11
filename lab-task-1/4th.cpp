#include<iostream>
#include<string>
#include<sstream>
using namespace std;

bool pallindrome(int num);

int main()
{
	bool b;
	int num;
	cout<<"Enter number : ";
	cin>>num;
	b = pallindrome(num);
	cout<<b<<endl;
	return 0;
}

bool pallindrome(int num)
{
	stringstream s;
	s << num;
	string str = s.str();
	int counter = 0;
	counter = str.size();
	for (int i = 0, j = counter-1; i < counter/2; i++, j--)
	{
		if(str[i] == str[j])
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
