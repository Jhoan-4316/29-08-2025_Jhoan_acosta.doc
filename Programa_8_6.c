// JHOAN RAUL ACOSTA PIEDRAHITA 
// 14/11/2025
//

#include <stdio.h>
#define MAX 5// DEFINE EL TAMAÑO MAXIMO DEL ARREGLO EN ESTE CASO 5
int main ()// INICIO DEL PROGRAMA 
{
int arreglo[MAX], cont;// DECLARA UN ARREGLO DE TAMAÑO MAX Y UNA VARIABLE CONT
for (cont=0; cont<MAX; cont++)// INGRESAR LOS VALORES EN EL ARREGLOS
{
printf("Ingrese el valor %d del arreglo: ", cont+1);// PEDIR AL USUARIO EL VALOR PARA CADA ELEMENTO
scanf("%i", &arreglo[cont]);// LEER EL VALOR INGRESADO Y GUARDARLO EN EL ARREGLO
}
printf("El valor ingresado para cada elemento del arreglo es:\n[");// MUESTRA EL INICIO DE LA LISTA DE VALORES
for (cont=0; cont<MAX; cont++)//MOSTRAR LOS VALORES DEL ARREGLO 
{
printf("%d\t", arreglo[cont]);// IMPRIMIR CADA VALOR DEL ARREGLO 
}
printf("]\n");// CIERRA LA LISTA DE VALORES DE ARREGLO 
return 0;
}
