#include<iostream>
using namespace std;

int integerNumberLength(int num)
{
    static int counter = 0;
	if(num/10 == 0)
	{
		counter += 1;
		return counter;
	}	
	else
	{
		counter += 1;
		int newNum;
		newNum = num/10;
		return integerNumberLength(newNum);
	}
}

int maximium(int num1, int num2, int num3, int num4)
{
	int num;
	int j = 0;
	num = num1;
	int array[4];
	array[0] = num2;
	array[1] = num3;
	array[2] = num4;
	for(int i = 0; i < 3; i++)
	{
		if(num > array[i])
		{
			continue;
		}
		else
		{
			j += 1;
			num = array[i];
		}
	}
	return j;
	
}

void largestNumberLength(int num1, int num2, int num3, int num4)
{
	int numLength1, numLength2, numLength3, numLength4, maxLength, maxLengthNumber;
	int arr[4];
	arr[0] = num1;
	arr[1] = num2;
	arr[2] = num3;
	arr[3] = num4;
	numLength1 = integerNumberLength(num1);
	numLength2 = integerNumberLength(num2) - (numLength1);
	numLength3 = integerNumberLength(num3) - (numLength2 + numLength1);
	numLength4 = integerNumberLength(num4) - (numLength1 + numLength2 + numLength3);
	//subracting length because i have use static counter above in a integerLength function
	maxLength = maximium(numLength1, numLength2, numLength3, numLength4);
	maxLengthNumber = arr[maxLength];
	cout<<"largest length number is : "<<maxLengthNumber<<endl;
	return;
	
}





int main()
{
	int num1, num2, num3, num4;
	cout<<"Enter first Number : ";
	cin>>num1;
	cout<<"Enter second Number : ";
	cin>>num2;
	cout<<"Enter third Number : ";
	cin>>num3;
	cout<<"Enter fourth Number : ";
	cin>>num4;
	largestNumberLength(num1, num2, num3, num4);
	return 0;	
}
