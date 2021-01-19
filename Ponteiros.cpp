#include <iostream>

using namespace std;

int main(){

    string veiculo="Carro";
    string *pv; //ponteiro tem que ser do mesmo tipo da variavel que ele aponta

    pv=&veiculo; // ponteiro PV recebe o endereço da variavel veiculo
                 // & e o endereço 


    cout << pv << "\n" << &veiculo;

    *pv="Moto"; //No endereço apontado por *pv adicione valor "Moto"

    cout <<"\n" << veiculo <<"\n" << *pv;

	return 0;
}