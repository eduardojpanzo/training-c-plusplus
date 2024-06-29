#include <iostream>
using namespace std;

int main (){
  int a, b;
  cin >> a >> b;
  int t = a>=b?(24 - a) + b:b-a;

  cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;

  return 0;
}