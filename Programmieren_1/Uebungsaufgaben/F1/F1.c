#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"

int main()
{
    int sum = 0;
    double avg = 0;
    for(int n1 = 1; n1 <= 5; n1++)
    {
        for(int n2 = 1; n2 <= 5; n2++)
        {
            for(int n3 = 1; n3 <= 5; n3++)
            {
                statistics(n1, n2, n3, &sum, &avg);
                printf("n1=%d n1=%d n1=%d --> sum=%d, avg=%lf\n", n1, n2, n3, sum, avg);
            }
        }
    }
}