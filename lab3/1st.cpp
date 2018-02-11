#include<iostream>
using namespace std;





int main(){

	int iArray[5];
	for(int i=0 ; i<5 ; i++){
	    cout<<"Enter "<<i+1 << " is : ";
		cin>>*(iArray+i);
	}
	for(int j=0 ; j<5 ; j++){
		cout<<*(iArray+j)<< " ";
	}
	cout<<endl;
	
	////////////////////////
	
	char cArray[5];
	for(int i=0 ; i<5 ; i++){
	    cout<<"Enter "<<i+1<<" is : ";
		cin>>*(cArray+i);
	}
	for(int j=0 ; j<5 ; j++){
		cout<<*(cArray+j)<< " ";
	}
	cout<<endl;
	
	
	//////////////////////
	
	double dArray[5];
	for(int i=0 ; i<5 ; i++){
	    cout<<"Enter "<<i+1<<" is : ";
		cin>>*(dArray+i);
	}
	for(int j=0 ; j<5 ; j++){
		cout<<*(dArray+j)<< " ";
	}
	cout<<endl;
	
	///////////////
	int a =*(iArray);
	int c;
	for(int i=1; i<5; i++){
		
		if(a<*(iArray+i)){
			a = *(iArray+i);
		}
	
	}
	cout<<a<<endl;
	
	//////////////
	char s_alphabet[27]="abcdefghijklmnopqrstuvwxyz";
    char c_alphabet[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	for(int i=0; i<5; i++){
		for(int j=0;j<27;j++){
			if (*(cArray+i) == s_alphabet[j]){
				*(cArray+i) = c_alphabet[j];
			}
		}
	}
	
	cout<<cArray<<endl;
	
	/////////////////////////
	double s = *(dArray);
	double a = *(dArray);
	double f = *(darray);
	for(int i=1; i<5; i++){
		if(s>*(dArray+i)){
			s = *(dArray+i);
		}
		if(a<*(iArray+i)){
			a = *(iArray+i);
		}
		
	}
	
	for(int j=0; j<5 ; j++){
		if(s>*(dArray+i)){
			s = *(dArray+i);
	////////////////////////
	
	int p1[5];
	for(int i=0 ; i<5 ; i++){
	    cout<<"Enter "<<i+1<< " is : ";
		cin>>*(p1+i);
	}
	
	int p2[5];
	for(int i=0 ; i<5 ; i++){
	    cout<<"Enter "<<i+1 <<" is : ";
		cin>>*(p2+i); 
	
	}
	
	
	int sum[5];
	int t;
	for(int i=0 ; i<5 ; i++){
		t = *(p1+i) + *(p2+i);
		*(sum+i) = t;
	}
	
	for(int j=0 ; j<5 ; j++){
		cout<<*(sum+j)<< " ";
	}
	
	return 0;
}
