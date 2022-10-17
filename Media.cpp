#include <stdio.h>
#include <iostream>
	int NUM,NUMF,suma,nums,media;
int main (){
  printf("Escribe el numerd de elementos que vas ingrsar: ");
  scanf("%d", &NUMF);
 
	while(NUM<NUMF){
		printf("El valor del numero[%d]\n",NUM);
		 printf("Escribe el numero asignado a este elemento: ");
          scanf("%d", &nums);
		suma=suma+nums;
	NUM++;
	}
	media=suma/NUMF;
	printf(".........................\n");

	printf("El valor del numero[%d]\n",media);

	return 0;
	
}
