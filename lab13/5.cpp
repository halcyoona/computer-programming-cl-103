#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{	
	ifstream in;
	in.open("data.txt");
	if(in.is_open())
	{
		cout<<"successed"<<endl;
		int characters = 0;
		int lower = 0;
		int upper = 0;
		while(!in.eof())
		{
			char chr;
			in.get(chr);
			if (int(chr) >= 65 && int(chr) <= 90)
			{
				upper++;
			}
			if (int(chr) >= 97 && int(chr) <= 122)
			{
				lower++;
			} 
			characters++;
		}
		cout<<"Upper case :"<<upper<<endl;
		cout<<"lower case :"<<lower<<endl;
		cout<<"total character: "<<characters<<endl;
		in.clear();
		in.seekg(0,ios::beg);
	}
	else
	{
		cout<<"Errors in file "<<endl;
	}
	
	
	
	
	if(in.is_open())
	{
		cout<<"successed"<<endl;
		int word = 0;
		while(!in.eof())
		{
			string str;
			in>>str;
			word++;
		}
		in.clear();
		in.seekg(0,ios::beg);
		cout<<"Word :"<<word<<endl;
	}
	else
	{
		cout<<"Errors in file "<<endl;
	}
	
	
	
	if(in.is_open())
	{
		cout<<"successed"<<endl;
		int line = 0;
		while(!in.eof())
		{
			string str;
			getline(in,str);
			line++;
		}
		in.clear();
		in.seekg(0,ios::beg);
		cout<<"Lines :"<<line<<endl;
	}
	else
	{
		cout<<"Errors in file "<<endl;
	}
	
	
	
	ofstream out;
	out.open("mydata.txt");
	while(!in.eof())
	{
		string str;
		getline(in,str);
		out<<str;
	}
	in.close();
	out.close();
	ifstream myfile;
	myfile.open("mydata.txt");
	while(!myfile.eof())
	{
		string str;
		getline(myfile,str);
		cout<<str<<endl;
	}
	
	return 0;
}
