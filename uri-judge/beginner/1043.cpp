#include <iostream>
#include <iomanip>
using namespace std;

int main (){
  float a, b, c;
  cin >> a >> b >> c;
  bool canFormTriangle = (a + b > c) && (a + c > b) && (b + c > a);
  
  cout<<fixed<<setprecision(1);

  if(canFormTriangle){
    float p;
    p = a+b+c;
    cout<<"Perimetro = "<<p<<endl;
  } else {
    float area;
    area = ((a + b)*c)/2;
    cout<<"Area = "<<area<<endl;
  }

  return 0;
}