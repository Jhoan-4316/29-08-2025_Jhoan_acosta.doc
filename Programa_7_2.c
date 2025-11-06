// JHOAN RAUL ACOSTA PIEDRAHITA 
// 24 DE OCTUBRE DE 2025
//Este programa demuestra el uso de if.

#include <stdio.h>   // Librería 

int main()  // Función principal
{
    if (0) // 0 significa falso, este bloque no se ejecuta
    {
        printf("Esta instrucción nunca se ejecuta\n");
        printf("porque la condición siempre es falsa (0).\n");
    }

    if (-8) // Todo número distinto de 0 es verdadero, se ejecuta
        printf("Esta instrucción siempre se ejecuta.\n");

    return 0; // Fin del programa
}
