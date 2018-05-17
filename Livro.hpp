#ifndef LIVRO_HPP
#define LIVRO_HPP

#include <iostream>
#include <string>
#include "Dados.hpp"
using namespace std;

class Livro: public Dados {
protected:

	string autor,editora; 
	long int ISBN;

public:
	Livro(string titulo, int lancamento, string autor, string editora, long int ISBN);
   ~Livro();
};

#endif