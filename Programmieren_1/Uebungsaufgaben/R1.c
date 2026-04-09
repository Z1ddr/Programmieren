#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int low = 0;
    int high = 1;
    srand((unsigned)time(NULL));            //NULL 0-pointer
    do
    {
        printf("Enter lower border: ");
        scanf("%d", &low);
        printf("\n");

        printf("Enter upper border: ");
        scanf("%d", &high);
        printf("\n");
        
        if(low >= high)
        break;

        printf("I will generate 10 random numbers between %d and %d\n", low, high);
        for(int i = 0; i < 10; i++)
        {
            int random = low + rand() % (high - low + 1);
            printf("%d ", random);
        }
        printf("\n");
    }while(low < high);

}