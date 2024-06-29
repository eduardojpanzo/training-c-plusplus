#include <iostream>
using namespace std;

int main (){
  int a, b;
  cin >> a >> b;
  bool areMultiples = a>b?a%b==0:b%a==0;
  

if(areMultiples)
  cout<<"Sao Multiplos"<<endl;
else
  cout<<"Nao sao Multiplos"<<endl;

  return 0;
}