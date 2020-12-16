#include <iostream>
using namespace std;
int main(){
	
	int cont;
	
	cont=0;
	while(cont<20){
		cout << "Contagem " << cont << "\n";
		cont++;
		//cont+=2; //Incremento de 2 em 2
		if(cont == 10){
			break;
		}
	}
	
	cout << "\nRotina finalizada\n";

	return 0;

}

