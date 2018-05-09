#include<iostream>
using namespace std;

class MATRIX
{
	private:
		int arr[4][4];
	public:
		MATRIX()
		{
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j++)
				{
					arr[i][j] = 0;
				}
			}
		}
		
		MATRIX(int array[4][4])
		{
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j++)
				{
					arr[i][j] = array[i][j];
				}
			}
		}
		
		~MATRIX()
		{
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j++)
				{
					arr[i][j] = 0;
				}
			}
		}
		
		void printValues()
		{
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j++)
				{
					cout<<"values at row = "<<i<<" and col = "<<j<<" is : "<<arr[i][j]<<endl; ;
				}
			}
		}
		
		void setValues(int array[4][4])
		{
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j++)
				{
					arr[i][j] = array[i][j];
				}
			}
		}
		
		MATRIX operator +(MATRIX mat)
		{
			int temp[4][4];
			MATRIX mat1;
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j++)
				{
					temp [i][j] = arr[i][j] + mat.arr[i][j];
				}
			}
			mat1.setValues(temp);
			return mat1;
		}
		
		MATRIX operator %(MATRIX mat)
		{
			int temp[4][4];
			MATRIX mat1;
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j++)
				{
					temp [i][j] = arr[i][j] % mat.arr[i][j];
				}
			}
			mat1.setValues(temp);
			return mat1;
		}
		
		bool operator >=(MATRIX mat)
		{
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j++)
				{
					if(arr[i][j] >= mat.arr[i][j])
					{
						continue;
					}
					else
					{
						return false;
					}
				}
			}
			return true;
		}
		
		
		bool operator <=(MATRIX mat)
		{
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j++)
				{
					if(arr[i][j] <= mat.arr[i][j])
					{
						continue;
					}
					else
					{
						return false;
					}
				}
			}
			return true;
		}
		
		
		
};


int main()
{
	int ar1[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int ar2[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	MATRIX mat1,mat2(ar1),mat3(ar2);
	mat1 = mat2 + mat3;
	//mat1 = mat2 % mat3;
	mat1.printValues();
	if(mat1 <= mat2)
	{
		cout<<"mat1"<<endl;
	}
	else
	{
		cout<<"mat2"<<endl;
	}
	return 0;
}
