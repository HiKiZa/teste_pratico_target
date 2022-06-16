#include <stdio.h>
#include <conio.h>

int main (){
	int i = 13, soma = 0, k = 0;
	while(k<i){
		k = k+1;
		soma = soma + k;
	}
	printf("%d\n", &soma);
}



