#include<iostream>
using namespace std;

class test
{
	private:
		int *p;
		int size;
	public:
		test(int s = 0)
		{
			size = s;
			p = new int[size];
			for(int i = 0; i < s; i++)
			{
				p[i] = 0;
			}
		}
		~test()
		{
			delete [] p;
		}
		void initialize(int a[])
		{
			for(int i = 0; i < size; i++)
			{
				p[i] = a[i];
			}
		}
		void print()
		{
			for(int i = 0; i < size; i++)
			{
				cout<<"array element "<<i+1<<" is :  "<<p[i]<<endl;
			}
		}
		
		test sum(test t1, test t2)
		{
			test t3(t1.size);
			for (int i = 0; i < t1.size; i++)
			{
				t3.p[i] = t1.p[i] + t2.p[i];
			}
			return t3;
		}
		
};

int main()
{
	test t1(3);
	int a[] = {2,3,4};
	int b[] = {3,4,5};
	t1.initialize(a);
	test t2(3);
	t2.initialize(b);
	test t3 = t1.sum(t1,t2);
	t3.print();
	t1.print();
	t2.print();
	
	return 0;
}
