#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	/*	
	string str;
	ifstream in;
	in.open("input.txt");
	while(!in.eof())
	{	
		in>>str;
		cout<<str<<" ";
	}
	cout<<endl;
	in.close();
	*/
	
	string str[6];
	ifstream in;
	in.open("input.txt");
	int i = 0;
	while(!in.eof())
	{
		getline(in,str[i]);
		cout<<str[i]<<endl;
		i++;
	}	

}
