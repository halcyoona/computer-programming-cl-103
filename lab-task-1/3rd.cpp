#include<iostream>
using namespace std;


char lowerLetter(char ch);


int main()
{
	char ch, character;
	cout<<"Enter a character : ";
	cin>>ch;
    character = lowerLetter(ch);
    cout<<character<<endl;
	return 0;
}

char lowerLetter(char ch)
{
    int num = int (ch);
	if(num >= 65 && num <= 91 )
	{
		int add = num - 65;
		int newNum = 97 + add;
		return char(newNum);
	}
	else
	{
		return ch;
	}
}
