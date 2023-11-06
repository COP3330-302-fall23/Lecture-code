#include "QuadraticEq.h"
#include <cmath>
#include <iostream>

using namespace std;

QuadraticEq::QuadraticEq(double aV, double bV, double cV)
{
    a = aV;
    b = bV;
    c = cV;
}

void QuadraticEq::set_a(double aV)
{
    a = aV;
}

void QuadraticEq::set_b(double bV)
{
    b = bV;
}

void QuadraticEq::set_c(double cV)
{
    c = cV;
}

double QuadraticEq::get_a()
{
    return a;
}

double QuadraticEq::get_b()
{
    return b;
}

double QuadraticEq::get_c()
{
    return c;
}

void QuadraticEq::find_root(double &sol1, double &sol2)
{
    double disc = pow(b,2)-4*a*c;

    if(disc >= 0)
    {
        sol1 = (-b - sqrt(disc))/(2*a);
        sol2 = (-b + sqrt(disc))/(2*a);
    }
    else
    {
       cout<<"The equation does not have real-solution"<<endl; 
    }
}

