#include <stdio.h> 
#include <conio.h>
int main() 
{
    int a = 1;
    int b = 1;
    int c = a * b;

    do
    {
        do
        {
            
            c = a * b;
            printf("%d x %d = %d\t", a, b, c);
            a++;

        } while(a < 11);

        printf("\n");
        b++;
        a = 1;
    } while(b < 11);
}