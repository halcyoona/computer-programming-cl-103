#include<iostream>
#include<string>
using namespace std;

class wDays
{
	private:
		string *str[7];
	public:
		wDays()
		{	
			for(int i = 0; i < 7; i++)
			{
				
				str[i] = new string;
				cout<<"Enter a weekday : ";
				cin>>*str[i];
			}
		}
		~wDays()
		{
			for(int i = 0; i < 7; i++)
			{
				
				delete str[i];
			}
		}
		void setDays(string s[7])
		{
			for(int i = 0; i < 7; i++)
			{
				
				*str[i] = s[i]; 
			}
		}
		
		void getDays(string s[7])
		{
			for(int i = 0; i < 7; i++)
			{
				
				s[i] = *str[i];
			}
		}
		
		void print()
		{	
			for(int i = 0; i < 7; i++)
			{
				
				cout<<"Days: "<<*str[i]<<endl;
			}
		}
		
};


int main()
{
	wDays f;
	string s[7] = {"mon","tues","wed","thurs","fri","sat","sun"};
	string d[7];
	f.setDays(s);
	f.getDays(d);
	f.print();
	for(int i = 0; i < 7; i++)
	{
				
		cout<<"Days:: "<<d[i]<<endl;
	}
	return 0;
}
