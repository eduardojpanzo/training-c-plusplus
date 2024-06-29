#include <iostream>
#include <iomanip>
using namespace std;

int main (){
   int x,y;
   float value;
    
    cin>>x>>y;

    switch (x){
      case 1:
      value= y*4.00;
      break;
      case 2:
      value= y*4.50;
      break;
      case 3:
      value= y*5.00;
      break;
      case 4:
      value= y*2.00;
      break;
      case 5:
      value= y*1.50;
      break;
    }

   cout<<fixed<<setprecision(2);
   cout<<"Total: R$ "<<value<<endl;
  
  return 0;
}