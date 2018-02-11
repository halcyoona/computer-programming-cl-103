#include<iostream>
#include<string>

using namespace std;

struct student {
    string id;
    string FirstName;
    string LastName;
    string courses[5];
    double marks[5];
    double cgpa;
    void initializeName(){
        FirstName = " ";
        LastName = " ";
        id = " ";
        cout<<"Enter First name : ";
        cin>>FirstName;
        cout<<"Enter Last name : ";
        cin>>LastName;
        cout<<"Enter id : ";
        cin>>id;
    }
    void initializeCourses(){
        for(int i = 0; i < 5; i++){
            cout<<"Enter Course : "<<i+1<<" ";
            cin>>courses[i];
        }
    }
    
    void initializeMarks(){
        for(int j = 0; j<5; j++){
            cout<<"Enter Marks : "<<j+1<<" ";
            cin>>marks[j]; 
        }
    }


    void initializeCgpa(){
        cout<<"Enter cgpa : ";
        cin>>cgpa;
    }
   
    void printData(){
        cout<<"First name : "<<FirstName<<endl;

        cout<<"Last name : "<<LastName<<endl;

        cout<<"id"<<id<<endl;
       
        for(int i = 0; i<5; i++){
            cout<<"Marks : "<<i+1<<" "<<marks[i]<<endl;
        }
        
        cout<<"Cgpa"<<cgpa;
        for(int j = 0; j<5; j++){
            cout<<"Courses : "<<j+1<<" "<<courses[j];
        }
        
    }
};


int main(){
    int n;
    student s3;
    s3.initializeName();
    s3.initializeCourses();
    s3.initializeMarks();
    s3.initializeCgpa;
    s3.printData();
    cout<<"Enter number of student : ";
    cin>>n;
    student s1,s2 ;
    cout<<"Enter cgpa of  student";
    cin>>s1.cgpa;
    for (int i = 1 ;i < n ; i++){
        cout<<"Enter cgpa of  student : ";
        cin>>s2.cgpa; 
        if (s1.cgpa > s2.cgpa ){
        }
        else {
            s1.cgpa=s2.cgpa;
        } 
   }
   if (s1.cgpa < s2.cgpa){
       cout<<s2.cgpa<<endl;
   }
   else{
       cout<<s1.cgpa<<endl;
           
   }          
        
    return 0;
}
