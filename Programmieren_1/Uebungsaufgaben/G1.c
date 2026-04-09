#include <stdio.h>
int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int sum = 0;
    long long prod = 0;
    double ave = 0;

    printf("Gib drei Zahlen ein\n");

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    sum = x + y + z;
    prod =(long long) x * y * z;        //casten(long long) x, y und z werden als long long berechnet
    ave = (x + y + z)/3.0;              //entweder wieder casten mit (float) oder mit /3.0 anstatt /3 gelöst

    printf("deine summe prod und ave sind %d, %lld und %0.3f\n", sum, prod, ave);  //%lld wichtig weil wenn %d dann gibt das Programm die zahl bloß als int aus
    return 0;
}