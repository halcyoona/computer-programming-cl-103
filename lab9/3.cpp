#include<iostream>
using namespace std;

class velocity
{
	private:
		double time;
		double distance;
	public:
		velocity(double d = 0, double t = 0)
		{
			distance = d;
			time = t;
		}
		
		~velocity()
		{
			distance = 0;
			time = 0;
		}
		
		void setValues(int d , int t)
		{
			distance = d;
			time = t;
		}
		
		void setTime(int t)
		{
			time = t;
		}
		
		void setDistance(int d)
		{
			distance = d;
		}
		
		
		void printValues()
		{
			cout<<"Distance is : "<<distance<<endl;
			cout<<"Time is : " <<time<<endl;
		}
		
		double getTime()
		{
			return time;
		}
		
		double getDistance()
		{
			return distance;
		}
		
		
		
		velocity operator +(velocity v)
		{
			velocity v1;
			v1.setTime(time + v.time);
			v1.setDistance(distance + v.distance);
			return v1;
		}
		
		velocity operator -(velocity v)
		{
			velocity v1;
			v1.setTime(time - v.time);
			v1.setDistance(distance - v.distance);
			return v1;
		}
		
		velocity operator /(velocity v)
		{
			velocity v1;
			v1.setTime(time / v.time);
			v1.setDistance(distance / v.distance);
			return v1;
		}
		
		velocity operator *(velocity v)
		{
			velocity v1;
			v1.setTime(time * v.time);
			v1.setDistance(distance * v.distance);
			return v1;
		}
		
		bool operator >(velocity v)
		{
			if (time > v.time && distance > v.distance)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		bool operator >=(velocity v)
		{
			if (time >= v.time && distance >= v.distance)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		bool operator <(velocity v)
		{
			if (time < v.time && distance < v.distance)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		bool operator <=(velocity v)
		{
			if (time <= v.time && distance <= v.distance)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		bool operator !=(velocity v)
		{
			if (time != v.time && distance != v.distance)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool operator ==(velocity v)
		{
			if (time == v.time && distance == v.distance)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		
};


int main()
{
	velocity v1, v2, v3;
	v1.setValues(3,5);
	v2.setValues(2,4);
	//v3 = v1 + v2;
	v3 = v1 * v2;
	//v3 = v1 - v2;
	//v3 = v1 / v2;
	v3.printValues();
	if(v3 != v2)
		cout<<"v3"<<endl;
	else
		cout<<"v2"<<endl;
	return 0;
}
