//DVD.cpp

#include <iostream>
#include <string>
#include "Dvd.hpp"
#include "Dados.hpp"
using namespace std;

Dvd::Dvd(int classificacao, int duracao, string diretor, int lancamento, string titulo){
		this -> titulo = titulo;
		this -> classificacao = classificacao;
		this -> duracao = duracao;
		this -> diretor = diretor;
		this -> lancamento = lancamento;
		this -> tipo = 3;
}
Dvd::~Dvd(){

}

