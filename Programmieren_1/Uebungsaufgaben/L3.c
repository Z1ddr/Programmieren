#include <stdio.h>

int main()
{
    printf("Output for first for-loop:\n");
    for(size_t i = 75; i >= 15; i = i - 5)     //i -= 5    i--, i--, i--, i--, i--
    {
        printf("%zu ", i);                      //%zu für den datentyp von size_t       %llu für unsigned long long
    }

    printf("\nOutput for second for-loop:\n");

    for(size_t i = 1; i <=50; i++)              //size_t generell für schleifen weil man keinen Overflow haben will (size_t = größter verfügbarer datentyp)
    {
        if((i % 3) != 0 && (i % 7) != 0)        //if(i % 3 && i % 7) ist auch möglich. 0=false 1 und 2=true -> i%3 && i%7 = 0/1 bei 0 gehts es nicht in die if schleife
        {
            printf("%zu ", i);
        }
    }
}