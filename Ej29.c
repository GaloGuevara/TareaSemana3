/*Leer un número entero y determinar a cuánto es igual el primero de sus dígitos*/

#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);
    printf("El numero ingresado es: %d\n", num);
}