/*Utilizando ciclos anidados, genera la siguiente terna de numeros:

    1   1   1
    2   1   2
    3   1   3
    4   2   1
    5   2   2
    6   2   3
    7   3   1
    8   3   2
    9   3   3

*/

#include <stdio.h>

int main()
{
    int i,j,k;

    for (int i = 1; i < 10; i++)
    {   
        if ((i>0)&&(i<=3))
        {
            j=1;

            if (i==1)
            {
                k=1;
            }
            else if (i==2)
            {
                k=2;
            }
            else if (i==3)
            {
                k=3;
            }
            
        }
        else if ((i>3)&&(i<=6))
        {
            j=2;

            if (i==4)
            {
                k=1;
            }
            else if (i==5)
            {
                k=2;
            }
            else if (i==6)
            {
                k=3;
            }
        } 
        else if ((i>6)&&(i<=9))
        {
            j=3;

            if (i==7)
            {
                k=1;
            }
            else if (i==8)
            {
                k=2;
            }
            else if (i==9)
            {
                k=3;
            }            
        }
        
        printf("%d\t%d\t%d\n", i,j,k);
    }
    
}