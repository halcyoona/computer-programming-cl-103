#include<iostream>
using namespace std;

class swimmingPool 
{

	private:
		float length;
		float width;
		float depth;
		float fillRate;
		float drainRate;
	
	public:
	
		swimmingPool()
		{
			length = 0;
			width = 0;
			depth = 0;
			fillRate = 0;
			drainRate = 0; 
		}
		
		swimmingPool(float l , float w )
		{
			length = l;
			width = w;
			depth = 0;
			fillRate = 0;
			drainRate = 0;
			
		}
		
		~swimmingPool()
		{
			length = 0;
			width = 0;
			depth = 0;
			fillRate = 0;
			drainRate = 0;
		}
		
		void initialize(float l, float w, float d, float fR, float dR)
		{
			length = l;
			width = w;
			depth = d;
			fillRate = fR;
			drainRate = dR; 
		}
		
		void print()
		{
			cout<<"Length is : "<< length <<endl;
			cout<<"Width is : "<< width <<endl;
			cout<<"Depth is : "<< depth <<endl;
			cout<<"Filling Rate is : "<< fillRate <<endl;
			cout<<"Draining Rate is : "<< drainRate <<endl;
		}
		
		void update(float l, float w, float d, float fR, float dR)
		{
			length = l;
			width = w;
			depth = d;
			fillRate = fR;
			drainRate = dR; 
		}
		
		float waterNeeded(float volumeOfWater)
		{
			float value;
			float gallon = 5; // 1 gallon equal to 5 cubic feet
			float v = fillRate / gallon;
			float volume = width * length * depth; 
			if (volumeOfWater == 0)
			{
				value =  volume / v;
				value *= gallon ; 
			}
			else
			{
				volume = volume - volumeOfWater;
				value  = volume / v;
				value *= gallon; 
			}
			
			return value; 
		}
		
		
		float fillTime(float volumeOfWater)
		{
			float time = 60 / fillRate; 
			float volume = length * width * depth;
			
			float value = waterNeeded(volumeOfWater);
			float fValue = value * time;
			
			return fValue;
		}
		
		float drainTime(float volumeOfWater)
		{
			float time = 60 / drainRate; 
			float volume = length * width * depth;
			
			float value = waterNeeded(volumeOfWater);
			float fValue = value * time;
			
			return fValue;
		}
		
		
};


int main()
{
	swimmingPool s1;
	s1.initialize(3,5,6,8,9);
	float v = s1.waterNeeded(0);
	cout<<"gallon needed to fill pool is : "<< v <<endl;
	float ft = s1.fillTime(0);
	float dt = s1.drainTime(0);
	cout<<"Time needed to fill pool is : "<<ft<<" seconds "<<endl;
	cout<<"Time needed to drain pool is : "<<dt<<" seconds "<<endl; 
	return 0;

}
