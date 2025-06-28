#include <iostream>
#include "Cifra.h";


Cifra::Cifra(const std::string& palavra){
    this->palavra = palavra;
}


void Cifra::calcular () {


    std::string alfabeto = "abcdefghijklmnopqrstuvwxyz";

    std::string consoante = "bcdfghjklmnpqrstvwxyz";

    std::string vogais = "aeiou";

    int pos_vo[5] = {0,4,8, 14,20};

    std::string entrada = this->palavra;

    std::string saida = "";

    for(char a:entrada){

        //achou vogal

        if(vogais.find(a) != std::string::npos) {
        saida += a;
        }
        
       //achou consoante
        else if(alfabeto.find(a) != std::string::npos){
        saida +=a;
        int pos_con = alfabeto.find(a);

        int menor =999;

        //descorbri o menor

        if(abs(pos_con - pos_vo[0]) < menor){
            menor = abs(pos_con - pos_vo[0]);
        }
        if(abs(pos_con - pos_vo[1]) < menor){
            menor = abs(pos_con - pos_vo[1]);
        }
        if(abs(pos_con - pos_vo[2]) < menor){
            menor = abs(pos_con - pos_vo[2]);
        }
        if(abs(pos_con - pos_vo[3]) < menor){
            menor = abs(pos_con - pos_vo[3]);
        }
        if(abs(pos_con - pos_vo[4]) < menor){
            menor = abs(pos_con - pos_vo[4]);
        }

        //descobrir qual gerou o menor com ordem de prioridade

        //a
        if(abs(pos_con - pos_vo[0]) == menor){
          saida += "a";
        }
        //e
        else if(abs(pos_con - pos_vo[1]) == menor){
          saida += "e";
        }
        //i
        else if(abs(pos_con - pos_vo[2]) == menor){
          saida += "i";
        }
        //o
        else if(abs(pos_con - pos_vo[3]) == menor){
          saida += "o";
        }
        //u
        else if(abs(pos_con - pos_vo[4]) == menor){
          saida += "u";
        }

        //adicionar a próxima consoante

        int po = consoante.find(a);

        if(consoante[po] == 'z'){
         saida += 'z';
        }
        else {
           saida += consoante[po+1];
        }

      


        }
        //caractere desconhecido
        else{
        saida += a;
        }

    }

    this->saida = saida;

}


void Cifra::print() const{
    std::cout<<"Sua palavra cifrada: " << this->saida<<"\n";
}
