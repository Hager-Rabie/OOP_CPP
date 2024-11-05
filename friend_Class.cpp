 #include<bits/stdc++.h>
using namespace std;
#define el "\n"
 void FOI () {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
class Csquare;
  class CRectangle{

    private:
     int width , hight;
 
     public:
        CRectangle() 
      {
       
      }
      CRectangle(int width , int hight) : hight(hight) , width(width)
      {
       
      }
       int area(){
        return (width*hight) ;
       }
       void Convert(Csquare );
  };
  class Csquare{
  private:
  int side;
  public:
  void set_side(int x){
    side = x;
  }
   friend class CRectangle ;
  };
  void CRectangle::Convert(Csquare a){
    width = a.side;
    hight = a.side;
  }
 int main(){
  FOI ();
    CRectangle r;
  Csquare s;
  s.set_side(4) ;
   r.Convert(s) ;
   cout << r.area() << el;

 }
