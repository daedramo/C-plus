#include <stdio.h>
float precio(float base, float impuesto); /* declaraci�n */
main()
{
float importe = 2.5;
float tasa = 0.07;
printf("El precio a pagar es: %.2f\n", precio(importe, tasa));
return 0;
}
float precio(float base, float impuesto) /* definici�n */
{
float calculo;
calculo = base + (base * impuesto);
return calculo;
}
