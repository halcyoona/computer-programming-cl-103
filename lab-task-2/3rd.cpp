#include<iostream>
#include<string>
using namespace std;

struct vehicle {
    string name;
    string color;
    string parts[5];
    int price;
};

struct honda {
    int model_no;
    int plate_no;
    vehicle car;
};

int main(){
    
    honda h1, h2;
    cout<<"Enter model number of the  h1 ";
    cin>>h1.model_no;
    cout<<"Enter plate number of the h1 ";
    cin>>h1.plate_no; 
    cout<<"Enter name of car h1 : ";
    cin>>h1.car.name;
    cout<<"Enter color of car h1 : ";
    cin>> h1.car.color;
    cout<<"Enter price of car h1 : ";
    cin>> h1.car.price;
    for (int i=0; i<5; i++){
        cout<<"Enter "<< i+1 << "th parts of car h1: " ;
        cin>>h1.car.parts[i];
        }
    cout<<"Enter model number of the  h2 ";
    cin>>h2.model_no;
    cout<<"Enter plate number of the h2 ";
    cin>>h2.plate_no; 
    cout<<"Enter name of car h2 : ";
    cin>>h2.car.name;
    cout<<"Enter color of car h2 : ";
    cin>> h2.car.color;
    cout<<"Enter price of car h2 : ";
    cin>> h2.car.price;
    for (int i=0; i<5; i++){
        cout<<"Enter "<< i+1 << "th parts of car h2: " ;
        cin>>h2.car.parts[i];
        }
   
    cout<<" model number of the  h1 "<<h1.model_no<<endl;
    cout<<" plate number of the h1 "<<h1.plate_no<<endl; 
    cout<<" name of car h1 : "<<h1.car.name<<endl;
    cout<<" color of car h1 : "<<h1.car.color<<endl;
    cout<<" price of car h1 : "<<h1.car.price<<endl;
    for (int i=0; i<5; i++){
        cout<< i+1 << "th parts of car h1: "<<h1.car.parts[i]<<endl;
        }
    cout<<" model number of the  h2 "<<h2.model_no<<endl;
    cout<<" plate number of the h2 "<<h2.plate_no<<endl;
    cout<<" name of car h2 : "<<h2.car.name<<endl;
    cout<<" color of car h2 : "<<h2.car.color<<endl;
    cout<<" price of car h2 : "<<h2.car.price<<endl;
    for (int i=0; i<5; i++){
        cout<< i+1 << "th parts of car h2: "<<h2.car.parts[i]<<endl ;
        }
    

    return 0;
}
