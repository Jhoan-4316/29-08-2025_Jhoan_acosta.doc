// JHOAN  RAUL ACOSTA PIEDRAHITA 
// 06/11/2025
//Códigos (variables tipo enumeración)

#include <stdio.h>
int main()
{
// declaración de la enumeración
enum boolean {NO, YES};
// declaración de una variable tipo enumeración
enum boolean valorBooleano;
valorBooleano = YES;
// Se comprueba que el valor de una enumeración es entero
printf("%d\n", valorBooleano);
// Se comprueba que el valor de una enumeración se puede reasignar
enum diasSemana {LUNES, MARTES, MIERCOLES=5, JUEVES, VIERNES};
printf("\n%d", LUNES); // Imprime el valor de LUNES, que es 0
printf("\n%i", MARTES); // Imprime el valor de MARTES, que es 1
printf("\n%d", MIERCOLES) ;// Imprime el valor de MIERCOLES, que es 5
printf("\n%i", JUEVES);// Imprime el valor de JUEVES, que es 6 
printf("\n%d\n", VIERNES);// Imprime el valor de VIERNES, que es 7
return 0;
}
