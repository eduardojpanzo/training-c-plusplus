#include <iostream>
#include <iomanip>
using namespace std;

void calculateTaxes(float salary,int percentage){
  float earned = salary * (percentage/100.00);
  float newSlary = salary + earned;

  cout<<"Novo salario: "<<newSlary<<endl;
  cout<<"Reajuste ganho: "<<earned<<endl;
  cout<<"Em percentual: "<<percentage<<" %"<<endl;
}

int main (){
  float salary;
  cin>>salary;

  cout<<fixed<<setprecision(2);

  if (salary >= 0 && salary <= 400.00){
    calculateTaxes(salary,15);
  } else if (salary >= 400.01 && salary <= 800.00){
    calculateTaxes(salary,12);
  }else if (salary >= 800.01 && salary <= 1200.00){
    calculateTaxes(salary,10);
  }else if (salary >= 1200.01 && salary <= 2000.00){
    calculateTaxes(salary,7);
  }else if (salary >2000.00){
    calculateTaxes(salary,4);
  }
  

  return 0;
}