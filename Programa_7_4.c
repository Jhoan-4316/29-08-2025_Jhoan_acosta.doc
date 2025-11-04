//JHOAN RAUL ACOSTA PIEDRAHITA
// 04 DE NOVIEMBRE DEL 2025
// ESTRUCTURA SELECTIVA IF-ELSE ANIDADA 



#include <stdio.h>
int main()
{
      int uno, dos, tres; //SE SOLICITA AL USUSARIO QUE INGRESE TRES NUMEROS 
      printf ("Ingrese 3 números separados por espacios:\n");// SE LEE LA ENTRADA DEL USUARIO 
      scanf ("%d %d %d", &uno, &dos, &tres);// INICIA LA PRIMERA COMPARACION 
      if (uno > dos)// SI UNO ES MAYOR QUE DOS, SE VERIFICA DI DOS ES MAYOR QUE UNO 
      {
       if (dos > tres) // SI DOS ES MAYOR QUE TRES, LA ORDEN ES: UNO>DOS>TRES
       {
       printf("%d es mayor a %d que es mayor a %d\n", uno, dos, tres);
       }
       else
       {
        if (uno > tres)
       {
        printf("%d es mayor a %d que es mayor a %d\n", uno, tres, dos);// SI UNOS ES MAYOR QUE TRES , ENTONCES TRES ES EL MAYOR Y LA ORDEN ES TRES>UNO>DOS
       }
       else
       {
         printf("%d es mayor a %d que es mayor a %d\n", tres, uno, dos);
       }
      }
    }
    else
    {
       if (dos > tres)// SI UNO ES MAYOR QUE DOS, SE PASA EL BLOQUE Y VERIFICAR SI DOS ES MAYOR QUE TRES
       {
         if (tres > uno)// SI DOS ES MAYOR QUE TRES, SE COMPARA TRES CON UNO
       {
       printf("%d es mayor a %d que es mayor a %d\n", dos, tres, uno);// SI TRES ES MAYOR QUE UNO, LA ORDEN ES DOS>TRES>UNO
       }
       else
      {
      printf("%d es mayor a %d que es mayor a %d\n", dos, uno, tres);// SI TRES NO ES MAYOR QUE UNO, LA ORDEN ES: DOS>UNO>TRES
      }
      }
      else
      {
        printf("%d es mayor a %d que es mayor a %d\n", tres, dos, uno);// SI DOS NO ES MAYOR QUE TRES, LA ORDEN ES: TRES>DOS>UNO
      }
  }
   return 0;
 }
