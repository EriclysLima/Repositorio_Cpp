#include <iostream>

using namespace std;

void texto();
void soma(int n1, int n2);

int main(){
	
	soma(15,5);

	return 0;

}

void texto() {
	cout << "\nNew\n";
}

void soma(int n1, int n2) {
	cout << "soma dos valores: " << n1+n2 <<"\n";
} 

