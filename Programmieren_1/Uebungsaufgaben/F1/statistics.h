
#pragma once

void statistics(int m1, int m2, int m3,int *summe, double *average)
{
    *summe = m1 + m2 + m3;
    *average = (double)*summe/3;
}
