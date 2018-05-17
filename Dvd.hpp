#ifndef DVD_HPP
#define DVD_HPP
#include "Dados.hpp"
#include <iostream>
#include <string>
using namespace std;

class Dvd: public Dados {

protected:

	int classificacao, duracao;
	string diretor;


public:
	Dvd(int classificacao, int duracao, string diretor, int lancamento, string titulo);
	~Dvd();
};

#endif