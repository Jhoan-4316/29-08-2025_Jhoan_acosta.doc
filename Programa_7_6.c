//JHOAN RAUL ACOSTA PIEDRAHITA
//06/11/2025
//Código (estructura de control selectiva switch-case)

#include <stdio.h>
int main()
{
int op;
printf("\tMenú\n\n");// Imprime el título "Menú" con una tabulación y dos saltos de línea
printf("Elegir la opción deseada\n");// Mensaje de instrucción al usuario
printf("1) Ingresar\n");// Opción 1
printf("2) Registrarse\n");// Opción 2
printf("3) Salir\n");// Opción 3
scanf("%d",&op);// El valor ingresado se guarda en la variable 'op'
switch(op)
{
case 1:
printf("Se seleccionó 'Ingresar'\n");// Si el usuario eligió 1
break;// Finaliza este caso
case 2:
printf("Se seleccionó 'Registrarse'\n");// Si el usuario eligió 2
break;// Finaliza este caso
case 3:
printf("Se seleccionó 'Salir'\n");// Si el usuario eligió 3
break;// Finaliza este caso
default:
printf("Opción no válida\n");// Si el usuario ingresa un número diferente de 1, 2 o 3
}
return 0;// Fin del programa
}
