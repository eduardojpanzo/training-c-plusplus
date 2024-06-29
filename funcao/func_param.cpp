#include <iostream>
using namespace std;

using binoryop = int(*)(int, int);

int exec (int (*func)(int,int)){
   return(*func)(4,5);
}

int exec2 (int (*func)(int,int),int a, int b){
   return(*func)(a,b);
}

int exec3 (binoryop func,int a, int b){
   return(*func)(a,b);
}

int add(int a, int b){
   return a+b;
}

int sub(int a, int b){
   return a-b;
}

int multp (int a, int b){
   return a*b;
}

int main (){


   cout<<exec(add)<<endl;
   
   cout<<exec(sub)<<endl;

   cout<<exec2(add,34,11)<<endl;
   cout<<exec2(sub,17,5)<<endl;
   
   cout<<exec3(multp,3,5)<<endl;
   
   return 0;
}