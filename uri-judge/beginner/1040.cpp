#include <iostream>
#include <iomanip>
using namespace std;

int main (){
   float n1,n2,n3,n4,media;
    
    cin>>n1>>n2>>n3>>n4;

    media = n1*0.2+n2*0.3+n3*0.4+n4*0.1;
    cout<<fixed<<setprecision(1);
    
    cout<<"Media: "<<media<<endl;

    if (media >= 7.0){
      cout<<"Aluno aprovado."<<endl;
    }
    else if(media < 5.0){
      cout<<"Aluno reprovado."<<endl;
    } else{
      cout<<"Aluno em exame."<<endl;
      
      float ne;
      cin>>ne;
      cout<<"Nota do exame: "<<ne<<endl;

      media = (media + ne)/2;
      
      if (media >= 5.0){
        cout<<"Aluno aprovado."<<endl;
      } else{
        cout<<"Aluno reprovado."<<endl;
      }
      
      cout<<"Media final: "<<media<<endl;
    }
  
  return 0;
}