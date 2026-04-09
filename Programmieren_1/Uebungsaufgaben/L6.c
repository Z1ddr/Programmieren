#include <stdio.h>

int main()
{
    int Height = 0;
    int Width = 0;
    printf("Height of rectangle?"); scanf("%d", &Height);
    printf("Width of rectangle?"); scanf("%d", &Width);

    for(int i = 0; i < Width; i++)
    {
        printf("#");
    }

    for(int i = 0; i < (Height - 2); i++)
    {

        printf("\n#");

        for (int j = 0; j < (Width - 2); j++)
        {
            printf(" ");
        }

        printf("#");
    }

    printf("\n");

    for(int i = 0; i < Width; i++)
    {
        printf("#");
    }


}