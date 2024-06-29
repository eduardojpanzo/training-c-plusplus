#include <iostream>
#include <vector>
using namespace std;

vector<int> map(vector<int> v, int(*fn)(int)){
   vector<int> newVector;
   
   for(auto el: v){
      newVector.push_back((*fn)(el));
   }

   return newVector;
}

int main (){
   auto square = [](int x){return x*x;};

   vector<int> nums = {2,5,4,12,23};
   vector<int> squares = map(nums,square);

  for(auto sq:squares) cout<<sq<<"\t";

  cout<<"\n";
  
  return 0;
}