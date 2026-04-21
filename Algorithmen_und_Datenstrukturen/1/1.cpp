#include <stdio.h>
#include <iostream>
using namespace std;
void Collatz(int i)
{
    while(i > 1) 
    {
        cout << i << endl;
        if (i % 2 == 0) 
        {
              i = i / 2;
        } else 
        {
               i = (i * 3) + 1;
        }
    }
    cout << i << endl << endl;

}

int main()
{
    int n1 = 27, n2 = 37, n3 = 42;
    Collatz(n1);
    Collatz(n2);
    Collatz(n3);
    return 0;
}

/* 
b)
Der Algorithmus ist für unsere Anfangswerte definiert, da er eine endliche Anzahl von Schritten benötigt,
um die Zahl 1 zu erreichen. Es gibt keine bekannten Fälle, 
in denen der Algorithmus in eine Endlosschleife gerät oder nicht terminiert.
Jedoch ist nicht bewiesen worden, dass der Algorithmus für alle positiven ganzen Zahlen terminiert,

/2 a) Ja Kaffee kochen ist ein Algorithmus, allerdings kann man ihn noch präziser formulieren, 
um Missverständnisse zu vermeiden.
b)
1. Kaffeemaschine öffnen
2. Wasser in den Wassertank bis zur Markierung füllen
3. Filterhalter öffnen
4. Filtertüte korrekt einsetzen
5. 1–2 Löffel Kaffeepulver in den Filter geben
6. Filterhalter schließen
7. Kaffeemaschine einschalten
8. Warten, bis der Kaffee vollständig durchgelaufen ist
9. Tasse bereitstellen
10. Kaffee in die Tasse eingießen
11. Kaffeemaschine ausschalten
12. Kaffee trinken

/3)
1. Einen Topf nehmen
2. Topf mit ca. 5 Litern Wasser füllen
3. Herd einschalten (hohe Stufe)
4. Topf auf den Herd stellen
5. Warten, bis das Wasser kocht (Blasenbildung)
6. Einen Esslöffel Salz ins Wasser geben
7. Spaghetti in das kochende Wasser legen
8. Spaghetti ggf. leicht nach unten drücken, bis sie vollständig im Wasser sind
9. Timer auf 6-8 Minuten stellen (je nach Packung)
10. Währenddessen gelegentlich umrühren
11. Nach Ablauf der Zeit testen, ob die Spaghetti weich sind
12. Herd ausschalten
13. Wasser mit einem Sieb abgießen
14. Spaghetti servieren
*/