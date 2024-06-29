#include <iostream>
#include <vector>
using namespace std;

int main (){
   vector<int> num = {1,2,3};
   vector<string> nomes = {"José","Pedro","Jorge","gomes","Armando"};

   num.push_back(4);
   num.push_back(5);
   num.push_back(6);
   num.push_back(7);

    cout<<num[4]<<endl;

    nomes[4] = "alberto";

    for(string n: nomes){
      cout<<n<<", "; 
    }
   
   cout<<"\n";

    for (auto i = num.begin(); i != num.end(); i++){
      cout<<*i<<endl;
    }
    

     
   return 0;
}