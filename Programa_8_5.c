// JHOAN RAUL ACOSTA PIEDRAHITA
// 14/11/2025
//Este programa calcula el promedio de las calificaciones de 5 alumnos. Solicita al usuario ingresar la calificación de cada alumno, las suma y finalmente muestra el promedio de las calificaciones ingresadas.

#include <stdio.h>
int main ()// INICIO DEL PROGRAMA 
{
int enteroNumAlumnos = 5;// DEFINIR LA CANTIDAD DE ALUMNOS EN ESTE CASO 5
float realCalif = 0.0, realPromedio = 0.0;// VARIABLES DE CLASIFICACION Y EL PROMEDIO
printf("\tPromedio de calificaciones\n");//IMPRIME EL TITULO
for (int indice = 0 ; indice < enteroNumAlumnos ; indice++) // INGRESAR A CALIFICACIONES
{
printf("\nIngrese la calificación del alumn %d\n", indice+1);// SOLICITAR LA CALIFICACION DE CADA ALUMNO 
scanf("%f",&realCalif);// LEER LA CALIFICACION 
realPromedio += realCalif;// SUMA DE LA CALIFICACION 
}
printf("\nEl promedio de las calificaciones ingresadas es: %f\n",// IMPRIME EL PROMEDIO
realPromedio/enteroNumAlumnos);// CALCULA EL PROMEDIO .
return 0;
}
