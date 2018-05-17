#ifndef MIDIATECA_HPP
#define MIDIATECA_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Dados.hpp"
using namespace std;

class Midiateca{
protected:
	vector<Dados*> armazenador;
	int quantidade_l;
	int quantidade_c;
	int quantidade_d;

public:
	 Midiateca(Livro *livro1, Livro *livro2, Dvd *Dvd1, Dvd *Dvd2, CD *CD1, CD *CD2);
	~Midiateca();

	void Inserir  (Dados *aux);
	void Remover  (Dados *aux);
	void Editar  (Dados *aux);		

}


#endif