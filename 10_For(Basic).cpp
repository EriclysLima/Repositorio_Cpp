#include <iostream>
using namespace std;
int main(){
	
	/*
        for (ini ; cond ; inc/dec){
              //comandos 
        }
	*/
	
	/*int x;
	
	for(x=0;x<10;x++) {
		cout << x << "\n";
	}*/
	
	//for (int tmp=0; tmp < 10000000000 ; tmp++); TEMPO PARA EXECUTAR
	
	int x,y,z;
	
	for(x=0,y=1,z=0 ; x<=10 && z<=6 ; x++,y+=2,z+=2){
		cout << x << " - ";
		cout << y << " - ";
		cout << z << "\n";	
	}
	
	
	return 0;

}

