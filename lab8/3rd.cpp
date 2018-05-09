#include<iostream>
using namespace std;

class aClass
{
	private:
		int alpha;
	public:
		void nonFunc()
		{
			alpha = 99;
		}
		void conFunc() const;
		
		
};


void aClass:: conFunc() const
		{
			cout<<alpha<<endl;
		}
		
		
int main()
{
	aClass c1;
	c1.nonFunc();
	c1.conFunc();
	return 0;
}
