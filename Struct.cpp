#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>	// Textos em geral

using namespace std;

struct Coordenadas {
	int x, y,z;
};

int main(){
	setlocale(LC_ALL, "Portuguese");

	Coordenadas ponto[3];

	ponto[0].x = 10;
	ponto[0].y = 20;
	ponto[0].z = 50;

	cout << "Coodenada A - X: " << ponto[0].x << endl << endl;
	cout << "Coodenada A - Y: " << ponto[0].y << endl << endl;
	cout << "Coodenada A - Z: " << ponto[0].z << endl << endl;

	ponto[1].x = 33;
	ponto[1].y = 44;
	ponto[1].z = 66;

	cout << "Coodenada B - X: " << ponto[1].x << endl << endl;
	cout << "Coodenada B - Y: " << ponto[1].y << endl << endl;
	cout << "Coodenada B - Z: " << ponto[1].z << endl << endl;

	ponto[2].x = 4;
	ponto[2].y = 7;
	ponto[2].z = 9;

	cout << "Coodenada C - X: " << ponto[2].x << endl << endl;
	cout << "Coodenada C - Y: " << ponto[2].y << endl << endl;
	cout << "Coodenada C - Z: " << ponto[2].z << endl << endl;

	system("pause");
	return 0;
}