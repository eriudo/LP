#include <iostream>
#include <string>
#include "Dados.hpp"
#include "Midiateca.hpp"
#include "Livro.hpp"
#include "CD.hpp"
#include "Dvd.hpp"
using namespace stdd;

void cadastro (Midiateca *Estante){

	int cadastro = 0;
		cout << ("Oi amigx bem vindx a sua midiateca digite o valor do produto que deseja cadastrar: 1- Livro; 2- CD; 3- Dvd; 0- Sair") << endl;
		cin  >> cadastro;
switch (cadastro){
		case 1:
			cout << ("Digite o titulo do livro que voce deseja cadastrar, ano de lancamento, autor, editora e o IBSN, nessa ordem:") << endl ;
			cin >> nome >> ano >> criador >> edi >> numero;
			Dados* qualquer = new Livro; 
			Livro* livrinho = (Livro*) qualquer(nome, ano, criador, edi, numero);
			Estante->Inserir (livrinho);  
			break;
		case 2:
			cout << ("Digite o titulo do CD que voce deseja cadastrar, ano de lancamento, compositor, gravadora e a quantidade de faixas, nessa ordem:") << endl ;
			cin >> nome >> ano >> criador >> edi >> numero;
			stante (nome, ano, criado, edi, numero); 
			Dados* qualquer1 = new CD; 
			CD* cd = (CD*) qualquer1(nome, ano, criador, edi, numero);
			Estante->Inserir (cd);  
			break; 
			break;
		case 3:
			cout << ("Digite o titulo do Dvd que voce deseja cadastrar, ano de lancamento, Diretor, classificação e a duracao, nessa ordem:") << endl ;
			cin >> nome >> ano >> criador >> edi >> numero;
			stante (nome, ano, criado, edi, numero);  
			Dados* qualquer2 = new Dvd; 
			Dvd* dvd = (Dvd*) qualquer2(nome, ano, criador, edi, numero);
			Estante->Inserir (dvd);  
			break;
	return 0;	
	}

void remover (Midiateca *Estante){

	int cadastro = 0;
		cout << ("Oi amigx bem vindx a sua midiateca digite o valor do produto que deseja remover, em seguida seu titulo: 1- Livro; 2- CD; 3- Dvd; 0- Sair") << endl;
		cin  >> cadastro;
switch (cadastro){
		case 1:
			cin >> nome;
			
			Estante -> Remover (nome,cadastro);  
			cout << ("O livro foi removido com sucesso") << endl ;  
			break;
		case 2:
			
			cin >> nome >> ano >> criador >> edi >> numero; 
			cout << ("O CD foi removido com sucesso") << endl ; 
			break;
		case 3:
			cin >> nome >> ano >> criador >> edi >> numero;  
			cout << ("O Dvd foi removido com sucesso") << endl ;
			break;	
		case 0:
			loop = 0;
			break;	
		}
	return 0;	
	}	





int main(int argc, char const *argv[])
{
	int cadastro;
	int loop = 1;
	string nome, criador, edi;
	int ano,numero,cadastramento,registro;
	

	Livro *livro1 = new Livro ("Deuses Americanos", 2016, "Neil Gaiman", "Intrinseca", 8551000721);
	Livro *livro2 = new Livro ("O Cavaleiro dos Setes Reinos", 2015, "George R R Martin", "LeYa", 8580448786);

	CD *CD1 = new CD ("Lust for Life", 2017, "Lana Del Rey", "Interscope Records", 16);
	CD *CD2 = new CD ("ANTI", 2016, "Rihanna", "Westbury Road Entertainment", 13);

	Dvd *Dvd1 = new Dvd (14, 164, "VILLENEUVE, DENIS", 2017, "Bladerunner 2049");
	Dvd *Dvd2 = new Dvd (18, 359, "HILTZIK, ROBERT", 1981, "Slashers");
	Midiateca Estante = Midiateca (livro1, livro2, Dvd1, Dvd2, CD1, CD2){


	while(loop == 1){
cout << ("Oi amigx bem vindx a sua midiateca digite o que deseja fazer: 1- Cadastrar; 2- Remover; 3- Editar; 4- Ver Acervo; 5- Ver Estatisticas") << endl;
	cin >> registro;
switch (registro){
		case 1:
			cadastro (Estante);
		case 2:
			remover (Estante);
			break;	
		case 0:
			loop = 0;
			break;	
		} 
			break;
		case 2:
			cout << ("Digite o titulo do CD que voce deseja cadastrar, ano de lancamento, compositor, gravadora e a quantidade de faixas, nessa ordem:") << endl ;
			cin >> nome >> ano >> criador >> edi >> numero;  
			break;
		case 3:
			cout << ("Digite o titulo do Dvd que voce deseja cadastrar, ano de lancamento, Diretor, classificação e a duracao, nessa ordem:") << endl ;
			cin >> nome >> ano >> criador >> edi >> numero;  
			break;	
		case 4:
			loop = 0;
			break;	
		case 5:
			djsaidas = 24;
			break;	
		}



	return 0;
}


