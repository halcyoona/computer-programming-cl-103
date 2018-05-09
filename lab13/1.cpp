#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	/*
	ofstream out;
	out.open("input.txt");
	for(int i=0; i<5; i++)
	{	
		string str;
		cin>>str;
		out<<str<<endl;
	}
	out.close();
	*/
	
	ifstream in;
	in.open("input.txt");
	if(in.is_open())
	{
		cout<<"successed"<<endl;
		for(int i=0; i<5; i++)
		{	
			string str;
			in>>str;
			cout<<str<<endl;
		}
		in.close();
	}
	else
	{
		cout<<"Errors in file "<<endl;
	}
	
	return 0;
}
