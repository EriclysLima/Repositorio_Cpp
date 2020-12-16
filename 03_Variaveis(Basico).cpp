#include <iostream>

using namespace std;

int main (){
	
	//TIPO NOME;
	//TIPO NOME = VALOR;
	
	int vidas=0; // variavel inteira 10,11,...
	char letra='B'; // variavel caractere 'b','c'...
	double decimal=5.2; // variavel com vircula 2.5, 3.3, 2.4449...
	float decimal2=5.2; // variavel com virgula 2.5...
	bool vivo=true; // variavel de decizao true/false
	string nome="bruno"; // variavel de grupo caracteres 
	
	cout << "digite o valor de vidas:" ; // comando escreva
	cin >> vidas ; // comando leia
	
	cout << vidas << "\n" ;
	cout << letra << "\n";
	cout << decimal << "\n" ;
	cout << decimal2 << "\n" ;
	cout << vivo << "\n" ;
	cout << nome << "\n" ;
	
	
	
	return 0;
}
