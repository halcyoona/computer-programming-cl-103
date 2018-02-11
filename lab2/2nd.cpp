#include<iostream>
#include<string>
using namespace std;

struct vehicle {
    string name;
    string color;
    string parts[5];
    int price;
};


int main(){
    vehicle v1 , v2 , v3 , v4;
    cout<<"Enter name of v1 : ";
    cin>> v1.name;
    cout<<"Enter color of v1 : ";
    cin>> v1.color;
    cout<<"Enter price of v1 : ";
    cin>> v1.price;
    for (int i=0; i<5; i++){
        cout<<"Enter "<< i+1 << "th parts of v1: " ;
        cin>>v1.parts[i];
        }
    cout<<"Enter name of v2 : ";
    cin>> v2.name;
    cout<<"Enter color of v2 : ";
    cin>> v2.color;
    cout<<"Enter price of v2 : ";
    cin>> v2.price;
    for (int i=0; i<5; i++){
        cout<<"Enter "<< i+1 << "th parts of v1: " ;
        cin>>v2.parts[i];
        }
    v4 = v2;
    v3 = v1;
    v2 = v3;
    v1 = v4;
    cout<<" Name of v1 : "<<v1.name<<endl;;
    cout<<" Color of v1 : "<<v1.color<<endl;
    cout<<" Price of v1 : "<<v1.price<<endl;
    for (int i=0; i<5; i++){
        cout<< i+1 << "th parts of v1: "<<v1.parts[i]<<endl ;
        }    
    cout<<" Name of v2 : "<<v2.name<<endl;
    cout<<" Color of v2 : "<<v2.color<<endl;
    cout<<" Price of v2 : "<<v2.price<<endl;
    for (int i=0; i<5; i++){
        cout<< i+1 << "th parts of v2: "<<v2.parts[i]<<endl ;
        } 
    
    return 0;
}
