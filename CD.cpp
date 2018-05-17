//Cd.cpp

#include <iostream>
#include <string>
#include "CD.hpp"
#include "Dados.hpp"
using namespace std;

CD::CD(string titulo, int lancamento, string compositor, string gravadora, int qtd_faixas){
		this -> titulo = titulo;
		this -> lancamento = lancamento;
		this -> compositor = compositor;
		this -> autor = autor;
		this -> gravadora = gravadora;
		this -> qtd_faixas = qtd_faixas;
		this -> tipo = 2;
}
CD::~CD(){

}