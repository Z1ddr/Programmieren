#include <stdio.h>
#include <time.h>
#include <stdlib.h>

unsigned long long fibu_iter(int n)
{
    if(n <=2)
    return 1;
    unsigned long long vor = 1;
    unsigned long long vorvor = 1;
    unsigned long long fibu = 1;

    for(int i = 3; i <= n; i++)
    {
        fibu = vor + vorvor;
        vorvor = vor;
        vor = fibu;
    }
    return fibu;
}

int fibu_rec(int n)
{
    if(n <= 2)
    return 1;
    return fibu_rec(n - 1) + fibu_rec(n - 2);
}

int main()
{
    clock_t t1=clock();
    int n = 45;
    printf("Fibunacci recursive von n= %d: %d\n", n, fibu_rec(n));
    printf("Fibunacci recursive von n= %d: %llu\n", n, fibu_iter(n));
    printf("Laufzeit für Fibunacci: %d s       Clocks per sec: %d", (float)(clock()-t1/CLOCKS_PER_SEC), CLOCKS_PER_SEC);

}