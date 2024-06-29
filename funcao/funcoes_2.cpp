#include <iostream>
using namespace std;

void log(int number, bool newLine=true); //function prototype (interface)

int main (){
  log(3, false);
  log(4, false);
  log(5, true);
  log(5, false);
   return 0;
}

void log(int number, bool newLine){
   cout<<"Number: "<<number;
   newLine?cout<<endl:cout<<"";
}