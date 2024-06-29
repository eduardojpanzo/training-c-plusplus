#include <iostream>
using namespace std;

int main (){
   string abc = "abcdefghijklmnopqrstuvwxyz";

   cout<<abc[9]<<endl;

   for (auto s:abc){
      cout<<s<<",";
   }
   
   return 0;
}