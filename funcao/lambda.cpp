#include <iostream>
using namespace std;

auto add = [](int x, int y) -> int{
   return x+y;
};

auto subst = [](int x, int y){
   return x-y;
};

//using param function
using binoryop = int(*)(int, int);

int exec (binoryop func, int a, int b){
   return(*func)(a,b);
}

int main (){
   cout<<add(3,5)<<endl;

   cout<<subst(3,5)<<endl;
   
   cout<<exec(add,13,5)<<endl;

   cout<<exec([](int x, int y){return x*y;},7,9)<<endl;
   
   return 0;
}