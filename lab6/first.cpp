#include<iostream>
using namespace std;

class Student
{
	private:
		string name;
		int id;
		string email;
		string nation;
		string address;
		Student()
		{
			name = "";
			id = 23;
			email = "";
			nation = "";
			address = "";
			
		};
		
	public:
		void print()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"ID : "<<id<<endl;
			cout<<"email : "<<email<<endl;
			cout<<"nation : "<<nation<<endl;
			cout<<"address : "<<address<<endl;
			
		};
};



int main(){
	Student s1;
	s1.print();
	return 0;
}
