#include <iostream>


int T_rek(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n*T_rek(n-1)+n;
}

int T_itr(int n)
{
    int summe = 1;
    for(int i = 2; i <= n; i++)
    {
        summe = i * summe + i;
    }
    return summe;
}



int main()
{
    for(int i = 1; i <= 10; i++)
    {
        std::cout << T_rek(i) << std::endl;
    }
}