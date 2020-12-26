#include <iostream>

using namespace std;

void imp(string txt="Digite");

int main(){
	
	imp("texto");

	return 0;

}

void imp(string txt){
	cout <<"\n" << txt << "\n";
}

