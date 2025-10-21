//PROGRAMA 4 
// 21_10_2025
//JHOAN RAUL ACOSTA PIEDRAHITA
// Como se almacenan y se visualizan datos en varibles de tipo entero y flotante.
 

#include <stdio.h>
int main()
{
int entero;
float flotante;
// \a hace sonar una alarma al mostrar el mensaje 
// \b borra el ultimo caracter mostrado
// \f hace un salto de pagina
// \n baja a la siguiente linea
// \r regresa a la linea 
// \b retrocede un caracter 
// \v hace un espacio grande hacia abajo
// \f salto de pagina
// \0 termina la cadena 
printf("\aIngresa el valor entero:\n ");
scanf("%i", &entero);
printf("\rEl valor ingresado es:\b %d\n", entero);
printf("\v\fIngresa el valor float: ");
scanf("%f", &flotante);
printf("El valor ingresado es: %f\0", flotante);
return 0;
}
