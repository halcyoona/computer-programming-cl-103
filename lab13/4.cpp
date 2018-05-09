#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{	
	string file;
	cin>>file;
	ofstream out;
	out.open(file);
	for(int i=0; i<5; i++)
	{	
		string str;
		cin>>str;
		out<<str<<endl;
	}
	out.close();
	return 0;
}
