#include <iostream>
#include <sstream>
using namespace std;

class Person {
   public:
   int name;
   int email;
   int year;

   Person(){
      name= 1;
      email= 1;
      year= 1970;
   }

   string toString(){
      stringstream ss;
      ss <<name<<"/"<<email<<"/"<<year;
     return ss.str();
   }

};

int main (){
   Person d1;
   Person d2;

  cout<<d1.toString()<<endl;
   
   d2.name = 10;
   d2.email = 1;
   d2.year = 2023;

  cout<<d2.toString()<<endl;
  return 0;
}