#include <stdio.h>
void unaFuncion();
void otraFuncion();
main()
{
extern variable;
variable = 9;
printf("El valor de variable es: %d\n", variable);
unaFuncion();
printf("Ahora el valor de variable es: %d\n", variable);
return 0;
}
void unaFuncion()
{
extern variable;
printf("En la funci�n unaFunci�n, variable es: %d\n", variable);
}
int variable;
