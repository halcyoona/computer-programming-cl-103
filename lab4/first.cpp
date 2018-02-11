#include<iostream>
using namespace std;

void swap1(int &a ,int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	return;
}

void swap2(int *a ,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}

int main(){
	int a =2, b=3;
	cout<<a<<b<<endl;
	swap1(a,b);
	cout<<a<<b<<endl;
	swap2(&a,&b);
	cout<<a<<b<<endl;
	return 0;
}
