#include <iostream>
using namespace std;

int main (){
  int a, b, c;
  cin >> a >> b >> c;

  int origA = a, origB = b, origC = c;

  if (a > b) swap(a, b);
  if (a > c) swap(a, c);
  if (b > c) swap(b, c);

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << endl;
  cout << origA << endl;
  cout << origB << endl;
  cout << origC << endl;

  return 0;
}