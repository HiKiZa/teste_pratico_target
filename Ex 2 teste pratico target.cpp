#include<stdio.h>
#include<conio.h>

int main()
{
    int x=0,n, termo1=0, termo2=1;
    printf("Digite um valor: \n");
    scanf("%d",&n);
    while (x<n){
		x=termo1+termo2;
		termo1=termo2;
		termo2=x;
	}
    if (x!=n)
    	printf("O numero informado nao faz parte da sequencia de fibonacci\n");
	else
		printf("O numero informado faz parte da sequencia de fibonacci\n");

    return 0;
}
