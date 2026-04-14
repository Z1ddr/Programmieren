//a) b)

#include <iostream>
#include <chrono>

int fib_rek(int n)                              // Zeitkomplexität (O(2^n)); Speicherkomplexität(O(n))
{
    if(n < 2)
    {
        return 1;
    }
    else
    {
        return fib_rek(n-1)+fib_rek(n-2);
    }
}

int fib_itr2(int n)
{
    int summe = 1;
    int old_summe = 0;
    for(int i = 2; i <= n; i++)                 //Zeitkomplexität(O(n))
    {
        int neue_summe = old_summe + summe;
        old_summe = summe;
        summe = neue_summe; 
    }
    return summe;                               //Speicherkomplexität (O(1))
}

int fib_itr1(int n)
{
    if(n < 2)
    return 1;

    int* summe = new int[n+1];                  //Speicherkomplexität (O(n))
    summe[1] = 1;
    summe[2] = 1;
    for(int i = 3; i <= n; i++)
    {
        summe[i] = summe[i-1] + summe[i-2];     //Zeitkomplexität(O(n))
    }
    return summe[n];
    delete[] summe;
}




int main()
 {
     int n = 39;
     auto start = std::chrono::high_resolution_clock::now();

     fib_rek(n);

     auto end = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double> diff1 = end - start;

     std::cout << "Dauer fuer n=" << n << ": " << diff1.count() << " Sekunden" << std::endl;

     start = std::chrono::high_resolution_clock::now();

     fib_itr1(n);

     end = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double> diff2 = end - start;

     std::cout << "Dauer fuer n=" << n << ": " << diff2.count() << " Sekunden" << std::endl;

     start = std::chrono::high_resolution_clock::now();

     fib_itr2(n);

     end = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double> diff3 = end - start;

     std::cout << "Dauer fuer n=" << n << ": " << diff3.count() << " Sekunden" << std::endl;
 }