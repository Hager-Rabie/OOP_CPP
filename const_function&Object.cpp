 #include<bits/stdc++.h>
using namespace std;
#define el "\n"
 void FOI () {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
  class Time{
    private:
   int hour , minute, second;
   public:
    Time(int h  , int m , int s) : hour(h) ,minute(m) , second(s) 
    {

    }
    void Print() const   //const function
    {
       cout << hour << " : " << minute << " : " << second << el;
    }
    void f(){
      cout << "hhhhh" << el;
    }
  };
 int main(){
  FOI ();
   const  Time noon(12 , 3, 40);
      noon.Print();
    
 }
