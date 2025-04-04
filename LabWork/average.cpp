#include<iostream>
using namespace std;

int main(){
int average;
int firstgrade;
int secondgrade;
int thirdgrade;
int lastgrade;

     cout<<"Enter the first grade" " ";
       cin>>firstgrade;
     cout<<"Enter the second grade" " ";  
       cin>>secondgrade;
     cout<<"Enter the third grade" " ";
       cin>>thirdgrade;
     cout<<"Enter the last grade" " "; 
       cin>>lastgrade;

       average = (firstgrade + secondgrade + thirdgrade + lastgrade)/4;

        cout<<"The average grade value is:" " "  << average<<"," " ";

        if (average>=80){
            cout<<"The average grade is A";
        }
        else{if(average>=70){cout<<"The average grade is B";}
        
        else{if(average>=60){cout<<"The average grade is C";}
        else{if(average>=50){cout<<"The average grade is D";}
        else {cout<<"You have failed";}}}}

        return 0;    
}       