#include <iostream>
using namespace std;

class Person {
   public:
   string name;
   string email;


   Person(string name = "Anonymous", string email="????")
      :name(name),email(email){}

   string toString(){
     return name + " [" + email +"]";
   }

};

int main (){
   Person actor1;

   Person actor2 ("Joao", "eduardo@gmail.com");

  cout<<actor1.toString()<<endl;
  cout<<actor2.toString()<<endl;

  return 0;
}