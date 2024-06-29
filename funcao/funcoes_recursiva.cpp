#include <iostream>
using namespace std;

int fatorial (int num) {
   if (num <= 0){
      return -1;
   }

   if (num == 1 ){
      return 1;
   }
   
   return num * fatorial(num -1 );
}

int main (){
   cout<<fatorial(4)<<endl;
   cout<<fatorial(5)<<endl;
   cout<<fatorial(0)<<endl;
   
   return 0;
}