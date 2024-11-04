 #include<bits/stdc++.h>
using namespace std;
#define el "\n"

  class Student{
    private:
    char name[20];
     int ID ;
     public:
      Student(){
        strcpy(name,"no name");
        ID = 12345;
        cout << "empty" << el;
      }
       Student( char n[] , int i){
        strcpy(name,n);
        ID = i;
        cout << "parametarized " << el;
      }
      void Print(){
        cout << name << " " << ID << el;
      }
  };
 int main(){

    Student s1("Hager" , 12345) , s2("Rahma" , 567891) , *p;
    Student arr[3] ={s1,s2};
    p = arr;
    for(int i=0 ; i< 3 ;i++){
     p++->Print() ;
    }
 }
