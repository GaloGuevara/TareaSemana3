/*Leer un número entero y determinar a cuánto es igual el primero de sus dígitos*/

#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);
    printf("El numero ingresado es: %d\n\n", num);

    if (num==0)
    {
        printf("El primero de sus digitos es: %d", num );
    }
    else if (num>0)
    {

        for (int i = 1; i <= num; i*=10)
        {
            if ((num/i>=1)&&(num/i<=9))
            {
                printf("El primero de sus digitos es: %d", num/i);
            }
        }
    }
    else if (num<0)
    {
        num= (-1)*num;
        for (int j = 1; j <= num; j*=10)
        {
            if ((num/j>=1)&&(num/j<=9))
            {
                printf("El primero de sus digitos es: -%d", num/j);
            }
        }        
    }

    return 0;    
}