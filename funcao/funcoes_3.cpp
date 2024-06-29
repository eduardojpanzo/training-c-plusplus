#include <iostream>
using namespace std;

int max(int n1, int n2); //function prototype (interface)

int main (){

   cout<<"O mair número é:"<<max(7,max(9,4))<<endl;
   return 0;
}

int max(int n1, int n2){
   return n1<=n2?n2:n1;
}