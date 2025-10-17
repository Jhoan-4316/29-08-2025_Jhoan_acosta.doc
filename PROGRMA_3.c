//PROGRAMA_3.c
//Jhoan Acosta
// 17 de octubre del 2025
// Este programa demuestra la sintaxis para declarar e inicializar variables de diferentes tipos de datos (enteros>

#include <stdio.h>
int main() { // Declara e inicializa un etero corto con un nuevo valor
short enteroNumero1 = 42; // Declara  e inicializa un entero estrandar con signo 
signed int enteroNumero2 = 99; // Declara e inicializa un entero largo sin signo 
unsigned long enteroNumero3 = 100000; // Declara e inicializa un caracter  usando un valor 
char caracterA = 77; // Declara e inicializa un caracter directamente
char caracterB = 'Z'; // DEclara e inicializa un numero de punto flotante 

float puntoFlotanteNumero1 =12.34; // Error;Declara un double con el modificador 'unsigned'

 double puntoFlotanteNumero2 = 567.8901; //Termina el programa
// FUnciones de salidas de datos en pantalla 

printf("La variable entera tiene valor: %i \n", enteroNumero1);
printf("La variable flotante tiene valor: %f \n", puntoFlotanteNumero1);
printf("La variable doble tiene valor: %f \n", (double);
printf("La variable caracter tiene valor: %c \n", caracterA);

printf("Entero como octal: %o \n Como Hexadecimal %X \n", enteroNumero2, enteroNumero3);
printf("Flotante con precisión: %5.2f \n", puntoFlotanteNumero2);
printf("Doble con precisión: %5.2f \n", double);
printf("Carácter como entero: %d \n", caracterB);
 
return 0;

} 
