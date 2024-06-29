#include <iostream>
#include <sstream>
using namespace std;

class Person {
   public:
   string name;
   string email;
   string city;

   Person(): Person("anonymos","-","-"){}

   Person(string name, string email,string city){
      (*this).name =  name;
      (*this).email = email;
      this->city = city;
   }

   string toString(){
      stringstream ss;
      ss <<name<<" ["<<email<<"]"<<" (" <<city<<")";
     return ss.str();
   }

};

int main (){
   Person actor1;

   Person actor2 ("eduardo", "eduardo@gmail.com","Benguela");
   Person actor3 = Person("Joao", "joao@gmail.com", "Luanda");

  cout<<actor1.toString()<<endl;
  cout<<actor2.toString()<<endl;
  cout<<actor3.toString()<<endl;

  return 0;
}