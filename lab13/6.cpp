#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void sort(int arr[], int size, int index);

int main()
{
	ifstream in;
	in.open("student.txt");
	string str1[11];
	string str2[11];
	int marks[11];
	if(in.is_open())
	{
		cout<<"successed"<<endl;
		int i = 0;
		while(!in.eof())
		{
			in>>str1[i]>>str1[i]>>marks[i];
			//cout<<str1[i]<<str1[i]<<marks[i];
			i++;
		}
	}
	else
	{
		cout<<"Errors in file "<<endl;
	}
	cout<<str1[10]<<str2[10]<<" = "<<marks[10]<<endl;
	cout<<str1[9]<<str2[9]<<" = "<<marks[9]<<endl;
	//sort(marks, 12,0);
	return 0;
}


