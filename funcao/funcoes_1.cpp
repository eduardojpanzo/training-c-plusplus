#include <iostream>
using namespace std;

void sayHello(){
   cout<<"Hello"<<endl;
}

void sayHelloTo(string name){
   cout<<"Hello "<<name<<endl;
}

string returnHi(){
   return "Hi";
}

string returnHiTo(string name){
   return "Hi " + name;
}

int main (){
   sayHello();

   sayHelloTo("Peter");

   cout<<returnHi()<<endl;

   cout<<returnHiTo("John")<<endl;
   
   return 0;
}