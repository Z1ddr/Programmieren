#include <iostream>
#include <cstdio>
using namespace std;
// 8
// a)
/*
double harm_rek(int n)
{
    if(n < 1)
    {
        return 0;
    }
    else
    {
        return 1.0/n + harm_rek(n-1);
    }
}

double harm_itr(int n)
{
    double summe = 0;
    for(int i=1; i <= n; i++)
    {
        summe += 1.0/i; 
    }
    return summe;
}

int main()
{
    cout << harm_rek(3) << endl;
    cout << harm_itr(3) << endl;
}
*/

//9
//a)

//F(n)=1+(n/(1+2*n))*F(n+1)

//b)


double piRekursiv(int n, int k = 1)
{
    if(k > n)
        return 1.0;
    else
        return 1.0 + (k / (1.0 + 2.0*k)) * piRekursiv(n, k+1);
}


int main()
{
 double pi = 2 * piRekursiv(1000);
 printf("Die ersten Stellen von Pi: %.10lf", pi);
}
