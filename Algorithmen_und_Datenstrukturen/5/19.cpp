#include <iostream>

int fact_it(int n)
{
    int product = 1;
    for(int i = 2; i <= n; i++)
    {
        product *= i;
    }
    return product;
}
int main()
{
    std::cout << fact_it(5);
}




/*
/19
a)
n-1

b)
3

c)
Zeitkomplexität O(n)
Speicherkomplexität Theta(1)
*/
