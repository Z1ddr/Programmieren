#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iarraySize = 7;
    printf("\nBitte Groesse des float Arrays angeben\n");
    float fzahlen[] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f};
    float* fzahlenPTR = fzahlen;
    float* fzahlen2PTR = (float*) malloc(7 * 4);

    fzahlenPTR[0] = 8.8f;
    *(fzahlenPTR + 1) = 9.9f;
    fzahlenPTR[2] = 10.10f;
    *(++fzahlenPTR) = 11.11f;
    --fzahlenPTR;
    *fzahlenPTR = 12.12f;
    scanf("%d", &iarraySize);

    
    /*for(int i = 0; i < 7; i++)
    {
        printf("\n%.2f     ", fzahlen[i]);
        printf("\n%.2f     ", fzahlenPTR[i]);
        printf("\n%.2f     ", *(fzahlenPTR+i));
        printf("\n%.2f     ", *(fzahlen2PTR + i));
    }*/

    float* fzahlen3PTR = (float*) malloc(iarraySize * sizeof(float));

    for(int i = 0; i < iarraySize; i++)
    {
        if(i < iarraySize / 2)
        fzahlen3PTR[i] = 123.0f;
        else
        fzahlen3PTR[i] = 456.0f;
    }

    if(iarraySize % 2)
    fzahlen3PTR[iarraySize / 2] = 999.0f;

    for(int i = 0; i < iarraySize; i++)
    {
        printf("\n#%d:   %.2f", i + 1, fzahlen3PTR[i]);
    }
}