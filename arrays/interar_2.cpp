#include <iostream>
using namespace std;

int main (){
   string nomes[] = {"José","Pedro","Jorge","gomes","Armando"};

  cout<<"\n ForEACH #1 (copy) \n";
   for(string s:nomes){
      s.append("!!!!");
      cout<<endl;
   }  

   cout<<nomes[0]<<endl;

   cout<<"\n ForEACH #2 (Ref)\n";
   for(string &s:nomes){
      s.append("!!!!");
      cout<<s<<" ";
   }  

   cout<<endl;

   cout<<nomes[0]<<endl;


   cout<<"\n ForEACH #3 (Ref)\n";
   for(string const &s:nomes){
      cout<<s<<" ";
   }  
   return 0;
}