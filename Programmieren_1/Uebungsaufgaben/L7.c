#include <stdio.h>

int main()
{
    int zeilen = 10;
    int spalten = 20;
    for(int zeichen = 0; zeichen < (zeilen * spalten); zeichen++)
    {
        if((zeichen <= (spalten-1)) || (zeichen >= (spalten*zeilen-spalten)) || ((zeichen % spalten) == 0) || ((zeichen % spalten) == (spalten-1)))
        {
            printf("#");
        }
        else if(zeichen % spalten != 0 && zeichen % spalten != (spalten - 1) && zeichen > (spalten-1) && zeichen < (spalten*zeilen-spalten))
        {
            printf(" ");
        }
        if(zeichen % spalten == (spalten-1))
        {
            printf("\n");
        }
        

        
    }
}