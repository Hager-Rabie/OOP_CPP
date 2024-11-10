 #include<bits/stdc++.h>
using namespace std;
#define el "\n"
  class demo{
  private:
  int data1 , data2 , *p;
  public:
  demo(){
    p = new int ;
  }
  demo( const demo &d){
    data1 = d.data1;
    data2 = d.data2;
    p = new int ;
    *p = *(d.p) ;
      *p = 50;
  }
  void display() {
  cout << data1 << " " << data2 <<" "<< *p << el;
  }
   void getvalues(int a , int b , int c){
      data1 = a;
      data2 = b ;
      *p = c ;
    
   }
  };
 int main(){
   demo obj1;
    obj1.getvalues(10,20,30);
    obj1.display();
     demo obj2 = obj1; // copy constructor 
  
      obj2.display();

  // copying by copy cinstructor or by assignment operator 
 }
