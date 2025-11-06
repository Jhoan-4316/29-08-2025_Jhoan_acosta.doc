//JHOAN RAUL ACOSTA PIEDRAHITA 
//06/11/2025
//Este programa permite elegir una opción del menú a partir del entero ingresado en los dias de la semana.
#include <stdio.h>
int main()
{
// Los valores de una enumeración son enteros y constantes
enum diasSemana {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};// Definición de la enumeración 'diasSemana'
int op;// Se declara una variable 'op' para almacenar la opción seleccionada por el usuario (número del día)
printf("Ingrese el día de la semana.\n");// Se muestra el menú para que el usuario ingrese un día de la semana
printf("1) Lunes\n");
printf("2) Martes\n");
printf("3) Miércoles\n");
printf("4) Jueves\n");
printf("5) Viernes\n");
printf("6) Sábado\n");
printf("7) Domingo\n");
// Se lee la opción seleccionada por el usuario
scanf("%d", &op);// Almacenamos el valor ingresado por el usuario en la variable 'op'

switch(op-1) // Se usa un 'switch' para manejar las opciones basadas en el valor de 'op'
{
case LUNES:// Si 'op - 1' es igual a 0 (LUNES)
printf("Seguimos en fin de semana.\n"); // Se imprime que seguimos en fin de semana
case MARTES: // Si 'op - 1' es igual a 1 (MARTES)
printf("Martes del saber.\n"); // Se imprime que es martes del saber
break;
case MIERCOLES:// Si 'op - 1' es igual a 2 (MIERCOLES)
printf("¡MIERCOLES! ya casi se nos va la semana.\n");// Se imprime que ¡MIERCOLES! ya casi se nos va la semana
break;
case JUEVES:// Si 'op - 1' es igual a 3 (JUEVES)
printf("¡Es Juernes!\n");// Se imprime que es juernes
break;
case VIERNES:// Si 'op - 1' es igual a 4  (VIERNES)
printf("¡Prepararnos para el fincho!\n");// Se imprime que ¡Prepararnos para el fincho!
case SABADO:// Si 'op - 1' es igual a 5 (SABADO)
printf("¡A RUMBEAR!\n");// Se imprime que ¡A RUMBEAR!
break;
case DOMINGO:// Si 'op - 1' es igual a 6  (DOMINGO)
printf("SE NOS FUE LA SEMANA :(.\n");// Se imprime que "SE NOS FUE LA SEMANA :("
break;
// No se necesita default
}
return 0x0; // Valor entero en hexadecimal
}
