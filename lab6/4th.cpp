#include<iostream>
using namespace std;


class DArray
{
	private:
		int size;
		int matrix[5][5];
		
	public:
	
	/////////////////////////////---Constructor---------///////////////////////////////////////////////
		DArray()
		{
			cout<<"--------Default Constructor Called-----------"<<endl;
			for(int i = 0; i < 5; i++)
			{
				for(int j = 0; j < 5; j++)
				{
					matrix[i][j] = 0;
				}
			}
		}
		
		DArray(int arr[5][5])
		{
			cout<<"--------Parametric Constructor Called-----------"<<endl;
			for(int i = 0; i < 5; i++)
			{
				for(int j = 0; j < 5; j++)
				{
					matrix[i][j] = arr[i][j];
				}
			}
		}
		
		DArray( int arr[5][5] = 0)
		{
			cout<<"--------Parametric Constructor Called-----------"<<endl;
			for(int i = 0; i < 5; i++)
			{
				for(int j = 0; j < 5; j++)
				{
					matrix[i][j] = arr[i][j];
				}
			}
		}
		
		
		~DArray()
		{
			cout<<"--------Destructor Called-----------"<<endl;
			for(int i = 0; i < 5; i++)
			{
				for(int j = 0; j < 5; j++)
				{
					matrix[i][j] = 0;
				}
			}
		}
		
		void initialize()
		{
			for(int i = 0; i < 5; i++)
			{
				for(int j = 0; j < 5; j++)
				{
					matrix[i][j] = j; 
				}
			}
		}
		
		void print()
		{
			for(int i = 0; i < 5; i++)
			{
				for(int j = 0; j < 5; j++)
				{
					cout<<matrix[i][j]<<" "<<endl;
				}
			}
		}
		
		
		
		
};


int main()
{

	return 0;

}
