#include <iostream>
#include <string>

using namespace std;

struct student_FAMU
{
    string firstName;
    string LastName;
    string ID;
    string major;
};
void print_student_info(student_FAMU student);

int main()
{
   student_FAMU student;

   cout<<"Provide student's Firstname: ";
   cin >>  student.firstName;

   cout<<"Provide student's Lastname: ";
   cin >> student.LastName;

   cout<<"Provide student's ID: ";
   cin >> student.ID;

   cout<<"Provide student's major: ";
   cin >> student.major;


  print_student_info(student);
}

/********************************************************************************************
*.                                  USER-DEFINED FUNCTIONS
********************************************************************************************/

void print_student_info(student_FAMU student)
{
   cout<<"************************** Student Info **************************"<<endl; 
   cout<<"Provide student's Firstname: ";
   cout << student.firstName<<endl;

   cout<<"Provide student's Lastname: ";
   cout << student.LastName<<endl;

   cout<<"Provide student's ID: ";
   cout<<student.ID<<endl;

   cout<<"Provide student's major: ";
   cout << student.major<<endl;
   
}
