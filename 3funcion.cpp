#include <stdio.h>
char caracteres[10];
int i;
main()
{
for(i=0; i<10; i++){
printf("Introduce un car�cter\n");
caracteres[i]=getchar();
getchar(); /* se utiliza para leer el retorno de carro */
}
/* Impresi�n del encabezado de la tabla */
printf("***********************************\n");
printf("CAR�CTER \tC�DIGO ASCII\n");
/* Bucle para imprimir los caracteres le�dos en orden inverso */
for(i=9;i>=0;i�)
{
putchar(caracteres[i]);
printf("\t\t"); /* imprime dos tabulaciones */
printf("%d",caracteres[i]);
printf("\n");
}
return 0;
}
