#include<iostream>
#include<cmath>
using namespace std;

struct point{
    double x , y;
    
};

int main(){
    double X , Y ,value, final_value;
    point p1, p2;
    cout<<"Enter value of P1 of x: " ;
    cin>>p1.x;
    cout<<"Enter value of P1 of y : " ;
    cin>>p1.y;
    cout<<"Enter value of P2 of x : " ;
    cin>>p2.x;
    cout<<"Enter value of P2 of y : " ;
    cin>>p2.y;
    X = (p2.x - p1.x);
    Y = (p2.y - p1.y);
    value = (pow(X,2) + pow(Y,2));
    final_value = sqrt(value);
    cout<<final_value<<endl;
    
    return 0;
}

