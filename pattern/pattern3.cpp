#include<iostream>
using namespace std;

int main(){
    for (int i = 5,k=0; i>0; i--,k++){
        for (int j=1; j<i; j++){
            cout<<" ";
        }
        for (int j=0; j<=k; j++){
            cout<<"*";
        }
    cout<<endl;
    
    }
  

    return 0;
}
