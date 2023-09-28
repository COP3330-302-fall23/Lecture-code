#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  string student_name;
  string student_list;
  double test1, test2, test3;
  ifstream InputFile;
  int option;
  bool flag;

  InputFile.open("student_list.txt"); 
  if(!InputFile)
  {
    cout<<"Error: The path or the file does not exist."<<endl;
    exit(1);
  }

  cout<<right<<setfill('*')<<setw(25)<<" Menu "<<setfill('*')<<setw(20)<<"."<<endl;
 cout<<"1. Find a student in the list. "<<endl;
 cout<<"2. Compute the student's final grade. "<<endl;
 cout<<"3. Compute all students' final grade. "<<endl;
 cout<<right<<setfill('*')<<setw(45)<<"."<<endl;

cin >> option;

switch (option)
{
case 1:
    /* code */
    cout<<"Write the student's name: ";
    cin >> student_name;
    flag = true;
    while(!InputFile.eof())
    {
        InputFile >> student_list;
        InputFile >> test1 >> test2 >> test3;

        if(student_list == student_name)
        {
           flag = false; 
           cout<<"Student's name: "<<student_list<<endl;
           cout<<"Grades :"<< test1 <<", "<<test2<<", "<<test3;
           break; 
        }
    }
    if(flag)
    {
       cout<<"The student is not in the list."<<endl; 
    }
    break;
case 2:
    cout<<"Write the student's name: ";
    cin >> student_name;
    flag = true;
    while(!InputFile.eof())
    {
        InputFile >> student_list;
        InputFile >> test1 >> test2 >> test3;

        if(student_list == student_name)
        {
           flag = false; 
           cout<<"Student's name: "<<student_list<<endl;
           cout<<"Grades :"<< test1 <<", "<<test2<<", "<<test3<<endl;
           cout<<"Final grade: "<<(test1+test2+test3)/3<<endl;
           break; 
        }
    }
    if(flag)
    {
       cout<<"The student is not in the list."<<endl; 
    }

    break;

default:
    break;
}


}