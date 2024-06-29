#include <iostream>
#include <sstream>
using namespace std;

class Person {
   public:
   string name;
   string email;

   Person(){}

   Person(string pname, string pemail){
      name =  pname;
      email = pemail;
   }

   string toString(){
      stringstream ss;
      ss <<name<<" ["<<email<<"]";
     return ss.str();
   }

};

int main (){
   Person user1;
   user1.name = "Peter Jonh";
   user1.email = "pj@gg.com";

   Person user2 {"Joao", "eduardo@gmail.com"};
   Person user3 = Person("Joao", "eduardo@gmail.com");

  cout<<user1.toString()<<endl;
  cout<<user2.toString()<<endl;
  cout<<user3.toString()<<endl;

  return 0;
}