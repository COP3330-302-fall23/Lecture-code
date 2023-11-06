#include <iostream>
#include "QuadraticEq.h"

using namespace std;

int main()
{
    double a_value = 3;
    double b_value = 12;
    double c_value = 4;

    QuadraticEq Eq1;
    QuadraticEq Eq2(a_value,b_value,c_value);

    double sol1, sol2;
    Eq2.find_root(sol1, sol2);

    cout<<"Solution1: "<<sol1<<endl;
    cout<<"Solution2: "<<sol2;
    cout<<endl; 
    
    cout<<"Eq1's solutions: "<<endl;
    a_value = 6;
    b_value = 12;
    c_value = 2;
    Eq1.set_a(a_value);
    Eq1.set_b(b_value);
    Eq1.set_c(c_value);
    Eq1.find_root(sol1, sol2);
    cout<<"Solution1: "<<sol1<<endl;
    cout<<"Solution2: "<<sol2;
    cout<<endl; 

   

}
