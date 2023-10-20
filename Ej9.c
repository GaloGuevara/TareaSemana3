/*Mostrar en pantalla todos los números terminados en 6
comprendidos entre 25 y 205*/

#include <stdio.h>
int main()
{
    int variacion=10;
    int num=26;

    while ((num>=25)&&(num<=205))
    {
        printf("%d\n", num);
        num=num+variacion;
    }
    
    return 0;
}