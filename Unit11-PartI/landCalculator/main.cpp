#include <iostream>
#include "LandCalculator.h"

using namespace std;


int main()
{

    int land, n_land;
    double price;
    cout<<"Do the number of lands: ";
    cin >>land;

    LandCalculator LandLord_1(land);
    
    cout<<"Do the land number to quote: ";
    cin >> n_land;
    cout<<"Type the price per feet: ";
    cin >> price;

    LandLord_1.compute_price(n_land, price);

    //Working with copy constructor
    LandCalculator LandLord_2(LandLord_1);

    LandLord_2.print_inf();

}