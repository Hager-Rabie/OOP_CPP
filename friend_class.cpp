 #include<bits/stdc++.h>
using namespace std;
#define el "\n"

 class Person {
   private:
  string name , gender ;
   int age;
   public:
   Person() : name("") , gender("") , age(0)
   {

   }
     Person(string n , string g , int a) : name(n) , gender(g) , age(a)
   {
      
   }
     void set_name( string name){
      this->name = name ;
     }
       void set_gender( string gender){
      this->gender = gender;
     }
       void set_age( int age ){
      this->age = age ;
     }
     string get_name(){
      return name ;
     }
      string get_gender(){
      return gender ;
     }
     int get_age(){
      return age;
     }
     friend class printclass;  //friend class
 };
    
    class printclass{
  public:
    void print(Person p ){
   cout << "the basics data of person : " << el;
   cout << "name : " << p.name << " "
    << "gender : " << p.gender << " " << "age : " << 
     p.age << el;
  }
    };
 int main(){
 
  Person x("hager" , "female" , 20) ;
     printclass pc;
     pc.print(x) ;
 

 }
