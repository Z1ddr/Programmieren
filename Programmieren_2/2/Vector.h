#include <iostream>
#pragma once

class Vector
{
    private:
    double* data;
    int size;

    public:
    Vector();
    Vector(int groesse);
    ~Vector();

    int get_size() const;
    void set_size(int new_size);
};