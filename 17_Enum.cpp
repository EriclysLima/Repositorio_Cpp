#include <iostream>

using namespace std;

int main(){
	
	enum armas{fuzil=100,revolver=8,rifle=12,escopeta=1}; //se nao colocar o valor ele faz uma sequencia
	armas armaSel;
	//int num;
	
	armaSel=revolver;
	
	cout << armaSel;
	

	return 0;

}
