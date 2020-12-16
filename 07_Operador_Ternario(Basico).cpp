#include <iostream>
using namespace std;
int main(){
	
	/* int n1,n2,nota,res2;
	string res;
	
	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout<<"Digite a segunda nota: ";
	cin>>n2;
	
	nota=n1+n2;
	
	//OPERADOR TERNARIO//
	
	//res2=(nota >= 60) ? "Aprovado" : "Reprovado";//
	
	(nota >= 60) ? res="Aprovado" : res="Reprovado";
	
	cout<< "\nSituacao do aluno: " << res << "\n";
	
	*/
	
	int n1,x;
	
	x=5;
	
	cout << "Digite um valor: ";
	cin >> n1;
	
	(n1 >= 10) ? x++ : x--;
	
	cout << "\nNovo valor do X: " << x << "\n";

	return 0;

}

