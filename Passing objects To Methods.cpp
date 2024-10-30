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
      cout << "feet = " <<feet << " " << " inches = " << inches << "\n";
   }
   Distance add_Distance(Distance d2){
      Distance result;
       result.feet = feet + d2.feet ;
       result.inches = inches + d2.inches;
       return result;
   }
 };
 int main(){


  Distance d1(5,3.5);
   Distance d2(7,4.25) ;
    Distance d3 = d1.add_Distance(d2);  // Passing objects To Methods
    d3.Display() ;


 }
