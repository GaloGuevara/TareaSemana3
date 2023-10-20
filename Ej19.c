/*Leer un número entero y determinar si es primo*/

#include <stdio.h>
int main()
{
    int num;

    printf("Ingrese un numero entero mayor que cero: ");
    scanf("%d%*c", &num);
    printf("El numero ingresado es: %d\n", num);

    int esPrimo=1; //Supones el numero es primo

    if (num<=0)
    {
        printf("El numero ingresado no es primo");
    } 
    else 
    {
        for (int i = 2; i*i <= num ; i++)
        {
            if (num%i==0)
            {
                esPrimo=0;
                break;
            }
        }

        if (esPrimo==1)
        {
            printf("Es primo");
        } 
        else if (esPrimo==0)
        {
            printf("No es primo");
        }
    }
    
    return 0;
}