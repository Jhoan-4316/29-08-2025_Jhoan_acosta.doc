//PROGRAMA 5 
// 21_10_2025
//JHOAN RAUL ACOSTA PIEDRAHITA
// Como funcionan los caracteres de convercion en c.
 
// d muestra numeros enteros en base decimal
// i muestra enteros en decimal, octal y hexadecimal
// x muestra el numero en base el 16 
// o muestra el numero en base 8
// u muestra enteros sin signos
// c muestra el caracter ASCII 
// s muestraa una cadena de caracteres 
// f muestra numeros reales como decimales
// e numeros reales en notacion cientifica
// g numero en formato automatico



include <stdio.h>
int main()
{
int enteroNumero;
char caracterA = 65; // Convierte el entero a carácter ASCII.
double puntoFlotanteNumero;
// Asignar valor de teclado a una variable.
printf("Escriba un valor entero: ");
scanf("%i", &enteroNumero);
printf("Escriba un valor real: ");
scanf("%lf", &puntoFlotanteNumero);
// Imprimir valores con formato.
printf("\nImprimiendo las variables \a\n");
printf("\t Valor de enteroNumero = %i \a\n", enteroNumero);
printf("\t Valor de caracterA = %c \a\n", caracterA);
printf("\t Valor de puntoFlotanteNumero = %lf \a\n",
puntoFlotanteNumero);
printf("\t Valor de enteroNumero en base 16 = %x \a\n", enteroNumero);
printf("\t Valor de caracterA en código hexadecimal = %x\n", caracterA);
printf("\t Valor de puntoFlotanteNumero\n");
printf("en notación científica = %e\n", puntoFlotanteNumero);
return 0;
}
