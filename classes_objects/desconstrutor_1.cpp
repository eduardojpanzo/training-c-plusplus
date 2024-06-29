#include <iostream>
using namespace std;

class Person {
   public:
   string name;

   Person(string name ):name(name){
      cout<<"Hello! my name is "<<name<<endl;
   }
   
   ~Person(){
      cout<<name<<" Saying Goodbye"<<endl;
   }
};

int main (){
   Person* p0 = new Person("Vital"); //não depende do escopo
   Person p1("Peter");
   
   {
      Person p2("Mary");
      Person p3("John");
      Person p4("May");
   }

   cout<<"End of the code"<<endl;
  return 0;
}