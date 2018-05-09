#include<iostream>
#include<fstream>
#include<string>

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
	in.open("/home/mehmood/Desktop/input.txt");
	if(in.is_open())
	{
		cout<<"successed"<<endl;
		int x, y;
		string str;
		char chr;
		float z; 
		in>>x>>y>>str>>chr>>z;
		in.close();
		cout<<x<<y<<str<<chr<<z;
	}
	else
	{
		cout<<"Errors in file "<<endl;
	}
	
	return 0;
}
