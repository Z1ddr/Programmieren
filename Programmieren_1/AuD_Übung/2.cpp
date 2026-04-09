#include <iostream>
using namespace std;

//Aufgabe 4
/*
int f4(int n)
{
        if(n<=2)
        {
                return 1;
        }
        else
        {
                return n*f4(n-1)-f4(n-2);
        }
}

int f4_i(int n)
{
        int it1{1};
        int it2{1};
        
        if(n <= 2)
        {
                return 1;
        }

        for(int i = 3; i <= n; i++)
        {
                int current = i * it1 - it2;
                it2 = it1;
                it1 = current;

        }

        return it1;
}

int main()
{
        for(auto n{1}; n < 6; n++)
        {
                cout << f4(n) << " ";
        }
        
        cout << endl;

        for(auto n{1}; n < 6; n++)
        {
                cout << f4_i(n) << " ";
        }

}
*/

// Aufgabe 5
/*
int f5(int n){
        if(n<=2)
        {
                return 1;
        }
        else
        {
                return n+f5(n-2);
        }
}

int f5_i(int n)
{
        if(n <= 2)
        {
                return 1;
        }

        int result{0};
        for(int i = n; i > 2; i-=2)
        {
               result += i;
        }

        return result + 1;
}

int main()
{
        for(auto n{1}; n < 6; n++)
        {
                cout << f5(n) << " ";
        }
        
        cout << endl;

        for(auto n{1}; n < 6; n++)
        {
                cout << f5_i(n) << " ";
        }

}
*/

// Aufgabe 6

void hanoi(int n, char von, char nach, char hilf) {
    if (n == 0) return;
    hanoi(n - 1, von, hilf, nach);
    cout << "Scheibe " << n << ": " << von << " -> " << nach << std::endl;
    hanoi(n - 1, hilf, nach, von);
}

int main() {
    int n{3};    
    hanoi(n, 'A', 'C', 'B');
    int anzahl = (1 << n) - 1;
    cout << anzahl;
    return 0;
}

/*
Aufgabe 7
a)
Ja es ist eine eindeutige, endliche Beschreibung um den gemeinsamen Teiler von 2 natürlichen Zahlen 
zu finden.

int berechnung(int m, int n)
{
        int r;
        do
        {
                if (m<n)
                {
                        int temp = m;
                        m = n;
                        n = temp;
                }
                
                r = m - n;
                m = n; n = r;

        }while(r != 0);

        return m;
}

int main()
{
        int a, b;
        cin >> a >> b;
        cout << "Größter gemeinsamer Teiler ist: " << berechnung(a, b) << endl;
}
        */