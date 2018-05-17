#include <iostream>
#include <string>
#include "Dados.hpp"
#include <vector>
using namespace std;

Midiateca::Midiateca (Livro *livro1, Livro *livro2, Dvd *Dvd1, Dvd *Dvd2, CD *CD1, CD *CD2){
	Inserir(livro1);
	Inserir(livro2);
	Inserir(CD1);
	Inserir(CD2);
	Inserir(Dvd1);
	Inserir(Dvd2);
	quantidade_l = 0;
	quantidade_c = 0;
	quantidade_d = 0;

}


void Midiateca::Inserir(Dados *aux){
	vector<Dados*>::iterator fiscal;
	int x = 0;
	int variavel;
	for (fiscal = armazenador.begin(); fiscal != armazenador.end(); fiscal++){
		if (strcmp (aux->getTitulo() , (*fiscal)->getTitulo()) == 0 && (aux->getTipo() ==  (*fiscal) -> getTipo()))
		{
			cout << (" ERRORRRRRRRR ") << endl;
			fiscal = armazenador.end();
			x = 1;
		}


	}

	if (x == 0){
		armazenador.push_back(aux);
		variavel = aux->getTipo();
	switch (variavel){
		case 1:
			quantidade_l +=;
			break;
		case 2:
			quantidade_c +=;
			break;
		case 3:
			quantidade_d +=;	
			break;	
		}
	}
}
    void Midiateca::Remover(Dados *aux){
    vector<Dados*>::iterator remove;
    int y = 0;
    int i = 0;
    for (remove = armazenador.begin();  remove != armazenador.end(); remove++){
		if (strcmp (aux->getTitulo() , (*remove)->getTitulo()) == 0 && (aux->getTipo() ==  (*fiscal) -> getTipo())){
			armazenador = armazenador.erase(armazenador.begin() + i);
			y = 1;
			i--;
		switch (variavel){
		case 1:
			quantidade_l -=;
			break;
		case 2:
			quantidade_c -=;
			break;
		case 3:
			quantidade_d -=;	
			break;	
		}	
	}
		
		i++;
	}

	if (y == 0){
		cout << ("Nao existe esse item") << endl;
		
	}
    
}
	void Midiateca::Editar(Dados *aux){
    vector<Dados*>::iterator editor;
    for (editor = armazenador.begin();  editor != armazenador.end(); editor++){
		if (strcmp (aux->getTitulo() , (*remove)->getTitulo()) == 0 ){
		
			y = 1;
		}


	}

	if (y == 0){
		cout << ("Nao existe esse item") << endl;
		armazenador.push_back(aux);
	}
    
}



