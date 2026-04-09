#include <stdio.h> 
#include <stdbool.h>
int main() 
{
    int c1 = 1;
    int c2 = -5;

    printf("Counting from 1 to 10:\n");

    do
    {
        printf("%i ", c1);
        c1 = c1 + 1;
    }
    while(c1 < 11);

    printf("\nCounting from -5 to -15:\n");

    do
    {
        printf("%i ", c2);
        c2 = c2 -1;
    }
    while(c2 > -16);

    printf("\nGood bye!\n");
    printf("Press any key to exit this program\n");


}