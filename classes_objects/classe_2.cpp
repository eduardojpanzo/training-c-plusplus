#include <iostream>
#include <sstream>
using namespace std;

class Product {
   public:
   string name;
   float price;
   float discount;

   int finalPrice(){
     return (1-discount)*price;
   }

};

int main (){
   Product p1;

   
   p1.name = "NoteBook";
   p1.price = 1600.45;
   p1.discount = 0.15;

  cout<<p1.name<<endl;
  cout<<p1.price<<endl;
  cout<<p1.discount<<endl;
  cout<<p1.finalPrice()<<endl;


  return 0;
}