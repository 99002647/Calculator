#include "headers.h"

double addition(double v1, double v2)
{
    return v1+v2;
}
double subtract(double v1, double v2)
{
    return v1-v2;
}
double multiply(double v1, double v2)
{
    return v1*v2;
}
double divide(double v1, double v2)
{
    if(v2!=0)
        return v1/v2;
    else
        return false;
}
int power(int v1, int v2)
{
    int value = v1;
    for (int i = 1; i < v2; i++)
    {
        value = value*value;
    }
    
    return value;
}
int modulo(int v1, int v2)
{
    return v1%v2;
}
