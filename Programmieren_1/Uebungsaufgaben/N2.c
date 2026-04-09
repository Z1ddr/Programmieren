#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(NULL));
    char* speicher [5] = {"tan", "han", "klam", "ro", "ba", "lo"};      //minimum 5 weil {'k', 'l', 'a', 'm', '\0'} == "klam"
    char* word [5] = {""};
    int len = 0;
    int wordlen = 0;

    printf("Syllables stored: ");
    for(int i = 0; i < 6; i++)
    {
        printf("%s ", speicher[i]);
    }

    printf("\n\n");

    for(int i = 1; i <= 10; i++)
    {
        len = (rand()%4 + 2);
        wordlen = 0;
        for(int j = 0; j < len; j++)
        {
            word[j] = speicher[(rand()%6)];
            wordlen = wordlen + strlen(word[j]);
        }
        printf("Generated Word #%d has %d letters : ", i, wordlen);
        for(int j = 0; j < len; j++)
        {
            printf("%s", word[j]);
        }
        printf("\n");
    } 
}