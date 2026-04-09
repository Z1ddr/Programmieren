#include <stdio.h>

int main()
{
    printf("1. With a for-loop:\n");
    for(int i = 17; i <= 29; i = i + 3)
    {
        printf("%d ", i);
    }

    printf("\n2. With a while-loop:\n");
    int i = 17;
    while(i <= 29)
    {
        printf("%d ", i);
        i = i + 3;
    }

    i = 17;
    printf("\n3. With a do-while-loop:\n");
    do
    {
        printf("%d ", i);
        i = i + 3;
    }
    while(i <= 29);

}