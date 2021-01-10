#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    if (cartas.empty()){
        cout << "Pilha vazia\n\n";
    }
    else{
        cout << "Pilha com cartas\n\n";
    }

    while(!cartas.empty()){
        cartas.pop();
    }

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Cartas do topo: " << cartas.top() << "\n";

    cartas.pop();
    cartas.pop();

    cout << "Nova carta do topo: " << cartas.top() << "\n";

    return 0;

    //push();
    //pop();
    //top();
    //size();
    //empty();
}
