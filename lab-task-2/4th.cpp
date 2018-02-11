#include<iostream>
#include<string>
using namespace std;

struct bookType {
    string title;
    string author[4];
    string publisher;
    int ISBN_number;
    int price;
    int publication_year;
    int no_of_copies;
};

int main(){
    
   bookType books[5]; 
   for(int i = 0 ; i<5 ; i++ ){
       cout<<"Enter title name : ";
       cin>>books[i].title;
       cout<<"Enter publisher name : ";
       cin>>books[i].publisher;
       cout<<"Enter ISBN number : ";
       cin>>books[i].ISBN_number;
       cout<<"Enter price of the book : ";
       cin>>books[i].price;
       cout<<"Enter number of the copies of the book : ";
       cin>>books[i].no_of_copies;
       for(int j = 0; j < 4; j++ ){
           cout<<"Enter books author "<<i+1;
           cin>>books[i].author[j];
       }

    }

    return 0 ;
}
