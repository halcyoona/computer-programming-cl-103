#include<iostream>
using namespace std;


class String
{
	private:
		string str;
	public:
		String()
		{	
			cout<<"---------------------Default Constructor Called--------------------"<<endl;
			str = "";
		}
		
		String(string s)
		{
			cout<<"----------- Parametric Constructor is Called---------------- "<<endl;
			str = s;
		}
		
		~String()
		{
			cout<<"----------------------Destructor Called------------------------"<<endl;
			str = "";
		}
		
		void set(string s)
		{
			str = s; 
		}
		
		void reverse()
		{
			int size = str.size();
			for(int i = 0, j = size; i < size/2; i++, j--)
			{
				char temp;
				temp = str[i];
				str[i] = str[j];
				str[j] = str[i];
			}
		}
		
		void print()
		{
			cout<<str<<endl;
		}
		
		
};




int main(){
	
	String s;
	s.set("Pakistan");
	s.reverse();
	s.print();
	return 0;

}
