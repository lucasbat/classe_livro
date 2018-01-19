/*

Este e um programa criado unicamente para implementar a classe chamada livro
e seus metodos.

Lucas Batista

*/

#include<iostream>
#include<string>
using namespace std;

class Livro{
	private:
		string tit, aut;	//titulo e autor do livro
		int qtdP;	//quantidade de paginas
		float val;	//valor do livro
	public:
		Livro(){
			qtdP=0;
			val=0;
		}
		~Livro(){}
		void set_dados(){
			cout<<"\nDigite o Titulo: "; getline(cin,tit);
			cout<<"\nDigite o Autor: "; getline(cin,aut);
			cout<<"\nDigite Quantidade Paginas: "; cin>>qtdP;
			cout<<"\nDigite Valor: "; cin>>val;
			cin.ignore();

		}
		void print_dados(){
			cout<<"\nTitulo: "<<tit;
			cout<<"\nAutor: "<<aut;
			cout<<"\nQuantidade Paginas: "<<qtdP;
			cout<<"\nValor: "<<val;
		}
		string ret_titulo(){
			return tit;
		}
		string ret_autor(){
			return aut;
		}
		int ret_quantP(){
			return qtdP;
		}
		float ret_valor(){
			return val;
		}

};

int main(){
	Livro X[3];
	string nc; //nome a consultar
	char resp;
	float v1, v2;
	for(int a=0; a<=2; a++)
		X[a].set_dados();
	for(int b=0; b<=2; b++)
		X[b].print_dados();
	cout<<"\nRelatorio de Titulo e Valor ";
	cout<<"\n----------------------------";
	cout<<"\nTitulo		      Valor\n";
	for(int c=0; c<3; c++)
 		cout<<X[c].ret_titulo()<<"\t\t\t"<<X[c].ret_valor()<<"\n";

	do{
		cout<<"\n\nDigite o nome a consultar: "; getline(cin,nc);
		for(int d=0; d<3; d++){
			if(nc==X[d].ret_titulo())
				X[d].print_dados();
		}


		cout<<"\n\nDeseja Consultar outro?";cin>>resp;

	}while(resp=='s' || resp=='S');

	//consulta entre faixa de preco
	do{
		cout<<"\n\nMenor Preco: R$"; cin>>v1;
 		cout<<"\nMaior Preco: R$ "; cin>>v1;

		for(int e=0; e<3; e++){
			if(v1<=X[e].ret_valor()){
				if(v1<=X[e].ret_valor())
				X[e].print_dados();
			}

		}


		cout<<"\n\nDeseja Consultar outro livro por preco?";cin>>resp;

	}while(resp=='s' || resp=='S');




	cout<<"\n\n";
	return 0;
}
