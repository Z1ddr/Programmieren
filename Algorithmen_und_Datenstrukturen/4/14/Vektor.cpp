#include "Vektor.h"


Vektor::Vektor(int dim)
{
    dimension = dim;
    daten = new int[dim];
}

Vektor::~Vektor()
{
    delete[] daten;
}

void Vektor::set(int i, int val)
{
    daten[i] = val;
}

int Vektor::get(int i)
{
    return daten[i];
}

int Vektor::bin_suche(int sw)
{
    int l_u=0,l_o=dimension-1; // untere und obere Grenze des Sucharrays
    while (l_u<=l_o)
    {
        int mitte = (l_u + l_o)/2;
        if(sw > daten[mitte])
        {
            l_u = mitte + 1;
        }
        else if(sw < daten[mitte])
        {
            l_o = mitte -1;
        }
        else
        {
            return mitte;
        }
    }
    return -1;
}
