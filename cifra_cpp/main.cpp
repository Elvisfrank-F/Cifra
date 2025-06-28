#include "Cifra.h";
#include <iostream>
#include <cctype>

int main(void){

  std::string pal;

  while(true){

  std::cout<<std::endl<<std::endl<<"Deseja traduzir(0) ou cifrar(1)?: ";
  std::cin>>pal;

  for(char& a:pal){
    a = tolower(a);
  }

   std::string palavra;
   std::cout<<"Insira sua palavra: ";

   std::cin.ignore();


  if(pal == "traduzir" || pal =="0") {
    
    std::getline(std::cin, palavra);
    for(char& a:palavra){
      if(a==' '){
        continue;
      }
      else {
        a = tolower(a);
      }
    }
    
    DesCifra f(palavra);
    f.calcular();
    f.print();


  }
  else if(pal == "cifrar" || pal =="1"){
      

  std::getline(std::cin, palavra);
  for(char& a:palavra){
      if(a==' '){
        continue;
      }
      else {
        a = tolower(a);
      }
    }
  Cifra c(palavra);
  DesCifra ci(palavra);

  c.calcular();
  c.print();

  }
  else {
    
    std::cout<<"\n\n\n----------------Opção inválida, saindo do programa-----------------\n\n\n";
    break;
  }

 

  

}
}