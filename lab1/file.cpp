#include<iostream>
using namespace std;

int fun(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;

    return 0;
}

int pow(int x, int y){
    long long result;
    result = 1;
    for (int i = 0; i<y; i++){
        result = result * x;
    }
    
    return result;
}    

int fact(int x){
    int result;
    result = 1;
    int y = x;
    for (int i = 0 ; i < y ; i++){
        result = result * x;
        x = x-1;
    }
    
    return result;
}

int sum1(int x , int n){
    int sum;
    n = (2 * n) - 2;
    sum = x +1;  
    
    for(int i = 2; i < n ; i += 2){
        
        sum = sum + (fun1(x,i)/fact(i));
    }
    cout<<sum<<endl;
    return 0;
}

int pow1(x,y){
    int i = 0;
    int result = 1;
    while(i<y){
        result = result * x;
        i += 1;
    }
    cout<<result<<endl;
    return 0;
}

int fact1(x){
    int i ;
    int y = x;
    while(i<y){
        result = result * x;
        x = x -1;
    }    
    cout<<result<<endl;
    return 0;
}



int main(){
    int x = 5;
    int y = 32;
    int n = 8;
    fun(x,n);
    fun1(x,y);
    fact(4);
    sum1(x,n);
    return 0;
}
