#include <stdio.h> 
#define ANLAGEDAUER 10                  // #define um die Anlagedauer später noch ändern zu können ohne es im Code suchen zu müssen
int main() 
{ 

    float Kapital, Zinssatz;
    printf("Kapital:"); scanf("%f", &Kapital);
    printf("Zinssatz:"); scanf("%f", &Zinssatz);    //umbenennung von C und r zu besser verständlichen Variablen
    int Jahr = 0;
    do 
    { 
        Kapital = Kapital + Kapital*(Zinssatz / 100.0f);
        Jahr = Jahr + 1;
        printf("\nJahre=%d: \t Kapital=%.2f", Jahr, Kapital);       // \t für übersichtlichkeit
    } 
    while (Jahr<ANLAGEDAUER);
    printf("\nGood bye!\n");
    printf("Press any key to exit this program.");


}
