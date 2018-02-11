#include<iostream>
using namespace std;


void fib(int index) {
    long number1 = 0; 
    long number2 = 1;
    long next_number = 0;
    if (index < 2)
    {
        cout<< number1;
        cout<< number2;
    }
    else
    {
    	cout<< number1;
        for (int i = 1 ; i < index ; i += 1) {
            next_number = number1 + number2;
            number1 = number2;
            number2 = next_number;
            cout<<number1;
        }
        return;
    }
               
} 

int main()
{
	fib(6);
	return 0;
}
