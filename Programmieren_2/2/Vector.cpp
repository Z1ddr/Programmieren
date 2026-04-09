#include "Vector.h"

Vector::Vector()
       : data(nullptr), size(0)
{
}
Vector::Vector(int groesse)
       :size{groesse}
{
    if(size>0)
    {
        data = new double [size];
    }
    else
    {
        data = nullptr;
    }
}
Vector::~Vector()
{
    delete[] data;
}

int Vector::get_size() const
{
    return size;
}

void Vector::set_size(int new_size)
{
    if(new_size == 0)
    {
        delete [] data;
        data = nullptr;
        size = new_size;
        return;
    }
    if(new_size == size)
    {
        return;
    }
    double* new_data = new double[new_size];
    for(int i = 0; i < size && i < new_size; i++)
    {
        new_data[i] = data[i];
    }
    size = new_size;
    double* old_data = data;
    data = new_data;
    delete [] old_data;
}
double Vector::operator[](int index) const
{
    return data[index];
}
double& Vector::operator[](int index)
{
    return data[index];
}

double Vector::at(int index) const
{
    if(index < 0 || index >= size)
    {
        return data[0];
    }
    else
    {
        return data[index];
    }
}
double& Vector::at(int index)
{
    if(index < 0 || index >= size)
    {
        return data[0];
    }
    else
    {
        return data[index];
    }
}