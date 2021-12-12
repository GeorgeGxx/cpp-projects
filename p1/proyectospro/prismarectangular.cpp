#include <iostream>

int main(){
int Numero[5][5];
int cont;
cont=1;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		Numero[i][j]=cont;
	cont++;
}	
}
 for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){	
    std::cout<< " "<<Numero[i][j];	
}
    std::cout<< "\n";
}
}
