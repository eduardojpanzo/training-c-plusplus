#include <iostream>
using namespace std;

int main (){
  int startHour,startMin, endHour, endMin,tHour,tMin;
  cin >> startHour>>startMin>> endHour>>endMin;

  if (startHour >= endHour){
    tHour = (24 - startHour) + endHour;
    tMin =  endMin - startMin;

    if (startMin > endMin){
      tMin = 60 - startMin + endMin;
      tHour = tHour - 1;
    }
  } else{
    tHour = endHour-startHour;
    tMin =  endMin - startMin;

    if (startMin > endMin){
      tMin = 60 - startMin + endMin;
      tHour = tHour - 1;
    }
  }

  cout<<"O JOGO DUROU "<<tHour<<" HORA(S) E "<<tMin<<" MINUTO(S)"<<endl;

  return 0;
}