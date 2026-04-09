#include <stdio.h>

int main()
{
    for(int zeilen = 0; zeilen <= 10; zeilen++)
    {
        for(int spalten = 1; spalten <= zeilen; spalten++)
        {
            printf("%d ", spalten);
        }
        printf("\n");
    }

    for(int zeilen = 0; zeilen <= 10; zeilen++)
    {
        for(int spalten = 11; (spalten - 10) <= zeilen; spalten++)
        {
            printf("%d ", spalten);
        }
        printf("\n");
    }
}