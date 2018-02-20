#include<iostream>
using namespace std;

int search(string a, int s,char d )
{
	if (a[s] == d)
	{
		return s;
	}
	else
	{
		return search(a, s-1, d);
	}
	
} 

void replace(int a[], int s, int f , int d)
{
	if (a[s] == f)
	{
		a[s] = d;
		return;
	}
	else
	{
		return replace(a, s, f, d);
	}
}

int countVowels(string s, int size)
{
	int c = 0;
	if (s[size] =='a' || s[size] =='e' || s[size] == 'i' || s[size] == 'o' || s[size] == 'u')
	{
		c += 1;
	}
	if (s[size] == 0)
	{
		return c;
	}
	return c + countVowels(s, size-1);
}


int main(){
	int a; 
	//a =search("amdbnrty", 8, 'r');
	//cout<<a<<endl;
	
	a = countVowels("mehmood munir",12);
	cout<<a<<endl;
	 
	
	return 0;
}
