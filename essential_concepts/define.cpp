#define ZERO 0
#define SQUARE(x) x*x
#include <iostream>
using namespace std;

int main (){
   cout<<"DEFINE"<<endl;


   cout<<SQUARE(10)<<endl;

   cout<<SQUARE(1+2)<<endl; //5
   cout<<SQUARE((1+2))<<endl; //9
   
   return ZERO;
}