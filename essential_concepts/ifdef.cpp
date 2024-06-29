#define ZERO 0
#define SQUARE(x) x*x
#include <iostream>
using namespace std;

int main (){
   cout<<"IFDEF"<<endl;


   #ifdef SQUARE
      cout<<SQUARE(10)<<endl;

      cout<<SQUARE(1+2)<<endl; //5
      cout<<SQUARE((1+2))<<endl; //9
   #else
      cout<<"Not is Sqare"<<endl;
   #endif


   #ifdef DEBUG == 1
      cout<<"Debug mode"<<endl;
   #endif
   
   return ZERO;
}