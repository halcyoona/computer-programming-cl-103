#include<iostream>
using namespace std;

class Time 
{

	private:
		int hr;
		int min;
		int sec;
	
	public:
	
		Time()
		{
			hr = 0;
			min = 0;
			sec = 0;
		}
		
		Time(int h, int m, int s)
		{
			hr = h;
			min = m;
			sec = s;
		}
		
		~Time()
		{
			hr = 0;
			min = 0;
			sec = 0;
		}
		
		void initialize(int h, int m, int s )
		{
			hr = h;
			min = m;
			sec = s;	
		}
		
		void print()
		{
			cout<<"Time is : "<<hr<<":"<<min<<":"<<sec<<":"<<endl;
		}
		
		void update(int h, int m, int s )
		{
			hr = h;
			min = m;
			sec = s;	
		}
		
		int getHr()
		{
			return hr;
		}
		
		int getMin()
		{
			return min;
		}
		
		int getSec()
		{
			return sec;
		}
		
		int totalsecs()
		{
			int value = hr*3600 + min*60 + sec;
			return value; 
		}
		
		Time addTime(Time t1, Time t2)
		{
			int h = t1.getHr() + t2.getHr();
			int m = t1.getMin() + t2.getMin();
			int s = t1.getSec() + t2.getSec();
			
			if(s >= 60)
			{
				m += 1;
				s = s - 60;  
			}
			
			if (m >= 60)
			{
				h += 1;
				m = m - 60;
			}
			
			if (h >= 24)
			{
				h = h - 24;
			} 
			
			Time t;
			t.initialize(h,m,s);
			return t;
		}
		

};


int main()
{

	Time t1,t2,t;
	t1.initialize(2,5,7);
	t2.initialize(4,7,12);
	t2.print();
	t1.print();
	t = t.addTime(t1,t2);
	t.print();
	
	return 0;
}

