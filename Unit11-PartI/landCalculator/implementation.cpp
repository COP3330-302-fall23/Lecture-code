#include "LandCalculator.h"
#include <iostream>

using namespace std;

LandCalculator::LandCalculator(int n_l)
{
    num_land = n_l;

    length = new double[num_land];
    width = new double[num_land];

    for(int index=0; index<num_land; index++)
    {
        cout<<"Type the length and width of your land# "<<index<<": ";
        cin >> length[index] >> width[index];
    }
}

LandCalculator::LandCalculator(const LandCalculator &Obj) //DeepCopy
{
    num_land = Obj.num_land;

    this->length = new double[num_land];
    this->width = new double[num_land];

    for(int i=0; i<num_land;i++)
    {
        length[i] = Obj.length[i];
        width[i] = Obj.width[i];
    }
}

LandCalculator::~LandCalculator()
{
    delete [] length;
    delete [] width;
}

int LandCalculator::getNumLand()
{
    return num_land;
}

double* LandCalculator::get_length()
{
    return length;
}

double* LandCalculator::get_width()
{
    return width;
}

void LandCalculator::setNumLand(int num)
{
    num_land = num;
}

void LandCalculator::set_length(const double array_length[])
{
    for(int i=0; i<num_land; i++)
    {
      length[i] = array_length[i];
    }
}

void LandCalculator::set_width(const double array_width[])
{
   for(int i=0; i<num_land; i++)
   {
        *(width+i) = array_width[i];
   }
}

void LandCalculator::compute_price(int land, double price_per_feet)
{
    double area = *(width+land)**(length+land);
    //double area = width[land]*length[land];

    cout<<"The price of land# "<<land<<" is: "<<area*price_per_feet<<endl;
}

 void LandCalculator::print_inf()
 {
    // cout<<"num_land"<<num_land;
    for(int i=0;i<num_land; i++)
    {
        cout<<"Information Land-"<<i<<": ";
        cout<<length[i]<<" "<<width[i]<<endl;
    }
 }

