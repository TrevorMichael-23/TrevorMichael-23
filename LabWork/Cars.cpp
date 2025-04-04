#include <iostream>
using namespace std;

class Cars{
  private:
     string colour;
     double weight;
     string fueltype;

  public:
     void setcolour(string colour1){
        colour = colour1;}
    
     void setweight(double weight1){
        weight = weight1;
     } 
     void setfueltype(string fueltype1){
        fueltype = fueltype1;
     }

};

int main(){
    Cars BMW;
    Cars BENZ;
    string BMWcolour , BENZcolour , BMWfueltype , BENZfueltype;
    double BMWweight , BENZweight;

 
    cout<<"Enter the colours of BMW and BENZ respectively\n";
    cin >> BMWcolour >> BENZcolour ;
    cout<<"Enter the weight of BMW and BENZ respectively\n";
    cin >>BMWweight >>  BENZweight;
    cout <<"Enter fueltype for BMW and BENZ respectively";
    cin>>BMWfueltype >>BENZfueltype;

    cout<<"THE " <<BMWcolour <<" BMW HAS A WEIGHT OF" <<BMWweight <<"KGS AND THE FUELTYPE IS" <<BMWfueltype<<endl;
    cout<<"THE " <<BENZcolour <<" BENZ HAS A WEIGHT OF" <<BENZweight <<"KGS AND THE FUELTYPE IS" <<BENZfueltype<<endl;
}