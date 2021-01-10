#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> aula,teste;
    int tam;
    list<int>::iterator it; //calaca um valor em qualquer lugar

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    tam=10;
    for(int i=0; i<tam; i++){
        aula.push_front(i);
    }

    it=aula.begin();
    advance(it,3);
    aula.insert(it,0);

    aula.erase(--it); //decremento, pois ele remove uma posicao depois

    //aula.clear(); remove os elementos da fila

    aula.merge(teste); //lista recebe elementos de outra lista

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam = aula.size();
    for (int i = 0; i < tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    return 0;
}