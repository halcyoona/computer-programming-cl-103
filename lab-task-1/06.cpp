#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int reverse(int num)
{
	stringstream s;
	s << num;
	string str = s.str();
	string newString = "";
	int counter = 0;
	counter = str.size();
	for(int i=(counter-1) ; i >= 0 ; i--)
	{
		newString += str[i];
	}
	stringstream geek(newString);
    int x;
    geek>>x;
    return x;
}

int main()
{
	int num;
	cout<<"Enter number : ";
	cin>>num;
	int x = reverse(num);
	cout<<x<<endl;
	return 0;
}
