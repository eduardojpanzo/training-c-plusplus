#include <iostream>
using namespace std;

int main (){
   int matrix[3][3] = {
      {1,2,3},
      {4,5,6},
      {7,8,9}
   };

   cout<<matrix[1][3]<<endl;

   matrix[3][2] = 10;

   cout<<matrix[3][2]<<endl;

   return 0;
}