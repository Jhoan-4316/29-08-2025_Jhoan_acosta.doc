// JHOAN RAUL ACOSTA PIEDRAHITA 
// 06/11/2025
//Este programa calcula el error absoluto entre dos números a y b ingresados por el usuario. Utiliza una expresión ternaria para calcular la diferencia absoluta y luego imprime el resultado en el formato |a - b| = resultado.

#include <stdio.h>
int main()// Función principal
{
double a, b, res;// Declaración de variables
printf("Calcular el error matemático E = |a - b|\n\n");// Se muestra un mensaje explicando el cálculo del error matemático
printf("Ingrese el valor de a:\n");// Se solicita al usuario que ingrese el valor de 'a'
scanf("%lf",&a);// Se lee un número de tipo double desde el teclado y se guarda en la variable 'a'
printf("Ingrese el valor de b:\n");
scanf("%lf",&b);
res = a < b ? b-a : a-b; // Calcular el error absoluto: |a - b|
printf("El error matemático de\n");// Mostrar el resultado
printf("| %lf - %lf | es %lf\n", a, b, res);// Se muestra la fórmula con los valores de 'a' y 'b' y el resultado 'res'
return 0;// Fin del programa
}
