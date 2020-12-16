#include <iostream>
using namespace std;
int main(){
	
	int num;
	
	num=8;
	
	int num2=0;
	
	//AND ---------------------------
	if(num > 4 && num < 9) {
		cout << "\n\nValor aceito\n";
	}else{
		cout << "\n\nNao aceito\n";
	}
     //------------------------------
     
     //OR ---------------------------
     if(num < 3 || num > 7){
     	cout<<"\n\nValor aceito\n";
	 }else{
	 	cout<<"\n\nNao aceito\n";
	 }
	 //------------------------------
	 
     //OR,AND -----------------------
     if((num >= 3 && num <= 6) || (num > 7 && num < 15) || (num > 15 && num <20)){
     	cout<<"\n\nValor aceito\n";
	 }else{
	 	cout<<"\n\nNao aceito\n";
	 }
	 //------------------------------
	 
	 //NOT --------------------------
	 if(!num2){
	 	cout << "\n\nVou ao clube\n";
	 }else{
	 	cout << "\n\nVou ao cinema";
	 }	 
	 
	return 0;

}

