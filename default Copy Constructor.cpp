 #include<bits/stdc++.h>
using namespace std;
#define el "\n"

 class Distance{
   private:
   int feet;
   float inches;
   public:
   Distance() : feet(0) , inches(0.0)
   {

   }
    Distance( const int f ,const float in) : feet(f) , inches(in)
   {

   }
   void setDistance( int feet , float inches){
   this->feet = feet;
   this->inches = inches;
   }
   void Display(){
      cout << feet << " " << inches << "\n";
   }
 };
 int main(){

 Distance d1;
  Distance d2(5,3.5);
  Distance d3(d2); //The default Copy Constructor
  d3.Display();
  d3.setDistance(7,4.25) ;
  Distance d4 = d3;   //The default Copy Constructor
  d4.Display() ;


 }
