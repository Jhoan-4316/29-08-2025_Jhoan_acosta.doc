//PROGRAMA_6.c
//Jhoan Acosta
// 23 de octubre del 2025
// El programa muestra el uso de operadores aritméticos y lógicos.


#include <stdio.h>
int main()
{
short ocho, cinco, cuatro, tres, dos, uno;
// 8 en binario: 0000 0000 0000 1000
ocho = 8;
// 5 en binario: 0000 0000 0000 0101
cinco = 5;
// 4 en binario: 0000 0000 0000 0100
cuatro = 4;
// 3 en binario: 0000 0000 0000 0011
tres = 3;
// 2 en binario: 0000 0000 0000 0010
dos = 2;
// 1 en binario: 0000 0000 0000 0001
uno = 1;
printf("Operadores aritméticos\n");
printf("6 modulo 2 = %d\n",seis%dos); // obtiene el residuo de la división entre dos números.
printf("Operadores lógicos\n");
printf("4 >> 2 = %d\n",ocho>>dos);// Divide por 2 , moviendo bits.
printf("4 << 1 = %d\n",ocho<<1);//  Multiplica por dos, moviendo bits.
printf("3 & 2 = %d\n",tres&dos);// Compara cada bit. Ejemplo:  3  y 2 el resultado es 2.
printf("4 | 2 = %d\n",cuatro|tres);//  Compara cada bit. Ejemplo: 4 o 3  el reseultado es 3.
printf("\n");
return 0;
}
