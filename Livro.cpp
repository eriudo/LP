//Livro.cpp

#include <iostream>
#include <string>
#include "Livro.hpp"
#include "Dados.hpp"
using namespace std;

Livro::Livro(string titulo, int lancamento, string autor, string editora, long int ISBN){
		this -> titulo = titulo;
		this -> lancamento = lancamento;
		this -> autor = autor;
		this -> ISBN = ISBN;
		this -> editora = editora;
		this -> tipo = 1;
}
Livro::~Livro(){

}