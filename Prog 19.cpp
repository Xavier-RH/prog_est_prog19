/* Autor: Xavier Romero Hernández, Realizado: 24/02/2022 
	Programa que pida 3 numeros e imprima el mayor de ellos
	*/
	
#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("Introduce el valor de a: ");
	scanf("%d",&a);
	printf("Introduce el valor de b: ");
	scanf("%d",&b);
	printf("Introduce el valor de c: ");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("a es el mayor");
	}
	else if(b>a && b>c){
		printf("b es el mayor");
	}
	else{
		printf("c es el mayor");
	}
	
	return 0;
}
