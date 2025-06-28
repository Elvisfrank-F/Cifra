#include "Cifra.h";
#include <iostream>
#include <string>


DesCifra::DesCifra(const std::string& palavra){
    this->palavra = palavra;
}

void DesCifra::print() const{
std::cout<<"Sua palavra traduzida: " << this->saida;
}

void DesCifra::calcular(){

    std::string saida="";
    std::string palavra = this->palavra;

    std::string alfabeto = "avcdefghijklmnopqrstuvwxyz";
    std::string vogais = "aeiou";

    int cont=0;

    for(char a:palavra){

        if(cont>0){
           cont--;
           continue;
        }
        //vogais 
        else if(vogais.find(a) != std::string::npos){
         saida +=a;
         continue;
        }
        //não achamos vogais
        else if(alfabeto.find(a)){
         saida+= a;
         cont =2;
         continue;
        }
        //nao achei poha nenhuma
        else {
        saida+=a;
        }
    }

    this->saida = saida;


}



