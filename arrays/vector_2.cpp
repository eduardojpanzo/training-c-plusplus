#include <iostream>
#include <vector>
using namespace std;

int main (){
  vector<int> num;

  num.assign(10,1);

  num[3] = 4;
  num[6] = 20;
  num[7] = 0;
  num[9] = 10;

  cout<<num.size()<<endl;

  for(auto n: num){
    cout<<n<<", "; 
  }
  num.erase(num.begin() + 3);
  cout<<"\n";

  cout<<num.size()<<endl;
  for(auto n: num){
    cout<<n<<", "; 
  }

  num.clear();
  cout<<num.size()<<endl;
      
  return 0;
}