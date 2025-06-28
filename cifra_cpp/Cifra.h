#ifndef CIFRA_H
#define CIFRA_H

#include <string>


class Cifra{
private:
std::string palavra;
std::string saida;

public:

Cifra(const std::string& palavra);
void print() const;
void calcular();

};

class DesCifra{
private:
std::string palavra;
std::string saida;

public:
DesCifra(const std::string& palavra);
void print() const;
void calcular();

};


#endif