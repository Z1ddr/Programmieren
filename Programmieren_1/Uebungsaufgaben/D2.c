#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int iAnzahlNotizen = 0;
    char cEingabe = '1';
    char cNotiz[200] = "Das ist meine Notiz";
    char* cNotizPTR = "Zweite notiz";
    char* cNotizPTRA[10];

    char** cNotizenPTRA2 = malloc(1 * sizeof(char*));

    do
    {
    printf("\nNotizbuch mit dynamischer Speicherverwaltung\n#1 Notiezeingabe\n#2 Ausgabe aller Notizen\n#3 Exit");

    cEingabe = _getch();

    if(cEingabe == '1')
    {
        printf("\nNotizeingabe: \n");
        gets_s(cNotiz, sizeof(cNotiz) - 1);
        cNotizPTR = (char*) malloc(strlen(cNotiz) + 1);
        strcpy_s(cNotizPTR, strlen(cNotiz) + 1, cNotiz);        // +1 ist wichtig weil sonst das \0 nicht mit koppiert werden würde
        cNotizPTRA[iAnzahlNotizen] = cNotizPTR;
        cNotizenPTRA2[iAnzahlNotizen] = cNotizPTR;

        iAnzahlNotizen++;
        cNotizenPTRA2 = realloc(cNotizenPTRA2, sizeof(char*) * (iAnzahlNotizen + 1));
    }

    if(cEingabe == '2')
    {
        printf("\nAusgabe aller Notizen \n");
        //printf("\nNotiz #:   %s", cNotiz);
        //printf("\nNotiz #: %s", cNotizPTR);
        for(int i = 0; i < iAnzahlNotizen; i++)
        {
            printf("\nNotiz #%d: %s", i+1, cNotizPTRA[i]);          // --> im Variablen Süeicher
            printf("\nNotiz #%d: %s", i+1, cNotizenPTRA2[i]);       // --> im Heap Segment
        }
        
    }

    }while(cEingabe != '3');
}