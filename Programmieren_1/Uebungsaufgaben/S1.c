#include <stdio.h>


int main()
{
    char Eingabe = 'a';
    double Ergebnis = 0;
    char Operator = '+';
    int Zahl_neu = 0;
    int s = 0;
    while(1)
    {   
        Eingabe = _getch();
        if(Eingabe >= '0' && Eingabe <= '9')
        {
            s = 1;
        }
        if(Eingabe == '+' || Eingabe == '-' || Eingabe == '*' || Eingabe == '/')
        {
            s = 2;
        }
        if(Eingabe == '=')
        {
            s = 3;
        }
        switch(s)
        {
            case 1:
            Zahl_neu = Eingabe - '0';
            case 2:
            Operator = Eingabe;
            case 3:
            {
                switch(Operator)
                {
                    case '+':
                    Ergebnis += Zahl_neu;
                    printf(" = %lf", Ergebnis);
                    case '-':
                    Ergebnis -= Zahl_neu;
                    printf(" = %lf", Ergebnis);
                    case '*':
                    Ergebnis *= Zahl_neu;
                    printf(" = %lf", Ergebnis);
                    case '/':
                    Ergebnis /= Zahl_neu;
                    printf(" = %lf", Ergebnis);
                    if(Zahl_neu == '0')
                    {
                        printf("\a");
                    }
                }
            }
        }
    }
}