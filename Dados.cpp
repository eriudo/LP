

#include <iostream>
#include <string>
#include "Dados.hpp"
using namespace std;

Dados::Dados(string titulo, int lancamento, int tipo){
		this -> titulo = titulo;
		this -> lancamento = lancamento;
		this -> tipo;
		
}
Dados::~Dados(){
}
string getTitulo(){
	return titulo;
}
int getTipo(){
	return tipo;
}