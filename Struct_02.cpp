#include <iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int pot;
    int valMax;
};

int main(){

    Carro car1;
    Carro car2;

    car1.nome="Tornado";
    car1.cor="Vermelho";
    car1.pot=450;
    car1.valMax=350;

    car2.nome = "Luxo";
    car2.cor = "Preto";
    car2.pot = 250;
    car2.valMax = 260;

    cout <<"Nome.............: " << car1.nome <<"\n";
    cout <<"Cor..............: "<< car1.cor << "\n";
    cout <<"Potencia.........: "<< car1.pot << "\n";
    cout <<"Velocidade maxima: "<< car1.valMax << "\n";

    cout << "Nome.............: " << car2.nome << "\n";
    cout << "Cor..............: " << car2.cor << "\n";
    cout << "Potencia.........: " << car2.pot << "\n";
    cout << "Velocidade maxima: " << car2.valMax << "\n";

    return 0;
}