#include <iostream>
using namespace std;

int main (){
   string greeting = "Hi";
   string& ref = greeting;


   cout<<greeting<<"\t"<< ref<<endl;

   string name = "Peter";
   ref = name;
   

   cout<<name<<"\t"<<ref<<"\t"<<greeting<<endl;
   cout<<&name<<"\t"<<&ref<<"\t"<<&greeting<<endl;

   ref.append(", Hi");

   cout<<name<<"\t"<<ref<<"\t"<<greeting<<endl;
   cout<<&name<<"\t"<<&ref<<"\t"<<&greeting<<endl;
    
    return 0;
}