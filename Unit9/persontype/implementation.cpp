#include "PersonType.h"
#include <iostream>

PersonType::PersonType(string fName, string lName, string mName)
{
    first_name = fName;
    last_name = lName;
    middle_name = mName;
}

PersonType::~PersonType(){}

 void PersonType::print()
{
    cout<<"First name: "<<first_name<<endl;
    cout<<"Last name: "<<last_name<<endl;
    cout<<"Middle name: "<<middle_name<<endl;

}

void PersonType::set_firstName(string fName)
{
    first_name = fName;
}

void PersonType::set_lastName(string lName)
{
    last_name = lName;
}

void PersonType::set_middleName(string mName)
{
  middle_name = mName;
}

bool PersonType::comparing_firstName(string given_name)
{
   bool value = false;

    if(given_name == first_name)
    {
        value = true;
    }

    return value;
}

bool PersonType::comparing_lastName(string given_lastName)
{
    bool value = false;

    if(given_lastName == last_name)
    {
        value = true;
    }

    return value;
}

