//Manuel Rodriguez, Carlos moya 

#include<stdio.h>

int main(){
	int n,n2,n3;

printf("Ingrese el primer numero:");
scanf("%i",&n);

printf("Ingrese el segundo numero:");
scanf("%i",&n2);

printf("Ingrese el tercer numero:");
scanf("%i",&n3);


if (n > n2 && n > n3){
	printf("El numero mayor es el primer numero:%d",n);
}

else if (n2 > n && n2 > n3){
	printf("El numero mayor es el segundo numero:%d",n2);
}

	else if  (n3 > n && n3 > n2){
	printf("El numero mayor es el tercer numero:%d",n3);
}
	
	
	return 0;
}