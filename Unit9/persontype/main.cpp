#include "PersonType.h"
#include <iostream>

using namespace std;

int main()
{
    PersonType Professor1;

    string first_N= "Carlos";
    string second_N = "Theran";
    string middle_N = "Andres";

    PersonType Professor2(first_N,second_N,middle_N);
    // Professor1.print();
    // Professor2.print();
  
    string fName= "Larry";
    string lName = "Suarez";
    string mName = "Michael";
    Professor1.set_firstName(fName);
    Professor1.set_lastName(lName);
    Professor1.set_middleName(mName);

    Professor1.print();
    Professor2.print();

    cout<<"Please provide first name: ";
    cin >> fName;

    cout<<"Please provide last name: ";
    cin >> lName;

    if(Professor2.comparing_firstName(fName))
    {
        cout<<"They have the same first name."<<endl;
    }
    else{
        cout<<"They don not have the same first name."<<endl;
    }



}