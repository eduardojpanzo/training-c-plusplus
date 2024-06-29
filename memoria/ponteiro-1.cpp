#include <iostream>
using namespace std;

int main (){
   int value = 98765;
   int &ref = value;
   int *pot = &value;

   cout<<value<<"\t"<<ref<<"\t"<<pot<<endl;
   cout<<&value<<"\t"<<&ref<<"\t"<<*pot<<endl;

   return 0;
}