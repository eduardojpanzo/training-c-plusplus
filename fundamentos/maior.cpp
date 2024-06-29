#include <iostream>
using namespace std;

int main (){
   int n1,n2,n3, maior = 0;

   cout<<"informe três números:\n";
   cin>>n1>>n2>>n3;

   if (n1 < n2){
      maior = n2;
   }

    if (n2 < n3){
      maior = n3;
   }

    if (n3 < n1){
      maior = n1;
   }
   

   cout<<"O mair número é:"<<maior<<endl;
    
    return 0;
}