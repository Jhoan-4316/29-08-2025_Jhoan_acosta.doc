//JHOAN RAUL ACOSTA PIEDRAHITA
// 24 DE OCTUBRE DEL 2025
// ESTRUCTURA DE CONTROL SELECTIVA IF 
 

#include <stdio.h>  // Librería

int main()  // Función principal del programa
{
    int a, b;  // Se declaran dos variables enteras a y b

    // Se pide al usuario que ingrese los valores
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);  // Se almacena el valor ingresado en 'a'

    printf("Ingrese el valor de b: ");
    scanf("%d", &b);  // Se almacena el valor ingresado en 'b'

    // Condición: si 'a' es mayor que 'b', se ejecuta el bloque siguiente
    if (a > b)
    {
        printf("\tEl valor de a (%d) es mayor que b (%d).\n", a, b);
    }
    else if (b > a)   // Si 'b' es mayor que 'a'
    {
        printf("\tb (%d) es mayor que a (%d).\n", b, a);
    }

    // Esta línea se ejecuta normalmente, sin importar la condición anterior
    printf("\tEl programa sigue su flujo normal.\n");

    return 0;  // Fin del programa
}

