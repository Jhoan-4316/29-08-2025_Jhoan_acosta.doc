// JHOAN RAUL ACOSTA PIEDRAHITA 
// 24 DE OCTUBRE DE 2025
// ESTRUCTURA CONTROL SELECTIVA IF-ELSE

#include <stdio.h>   // Librería

int main()           // Función principal
{
    int num;         // Variable para guardar el número

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número:\n");
    scanf("%d", &num);

    // Verificar si el número es par o impar
    if (num % 2 == 0)
        printf("El número %d es par.\n", num);   // Si el resto es 0, es par
    else
        printf("El número %d es impar.\n", num); // Si no, es impar

    return 0;  // Fin del programa
}

