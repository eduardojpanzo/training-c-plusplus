#include <iostream>
using namespace std;

int main (){
   string nomes[] = {"José","Pedro","Jorge","gomes","Armando"};

   // For Each
   for(string s:nomes){
      cout<<s<<endl;
   }  
   return 0;
}