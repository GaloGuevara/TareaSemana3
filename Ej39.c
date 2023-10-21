/*Se define la serie de Fibonacci como la serie que comienza con los dígitos 1 y 0 y va sumando progresivamente
los dos ultimos elementos de la serie, así:

    0   1   1   2   3   5   8   13  21  34  ...

Utilizando el concepto de ciclo, generar la serie de Fibonacci hasta llegar o sobrepasar el número 10000
*/

#include <stdio.h>

int main()
{

    int cont0=0, cont1=1;
    int resul;

    printf("%d\n%d\n", cont0,cont1);
    while (resul<=10000)
    {
        resul=cont0 + cont1;
        printf("%d\n", resul);
        cont0=cont1;
        cont1=resul;
    }
    return 0;
}
