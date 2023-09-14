#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  string student1_name;
  string student2_name;
  double student1_test1;
  double student1_test2;
  double student1_test3;
  double student2_test1;
  double student2_test2;
  double student2_test3;
  double aver_student1;
  double aver_student2;

  ifstream InputFile;
  ofstream OutputFile;

  InputFile.open("students_grades.txt");

  if(!InputFile)
  {
    cout<<"Error: the path or files does not exits"<<endl;
    exit(1);
  }

  InputFile >> student1_name;
  InputFile >> student1_test1 >> student1_test2 >> student1_test3;

  InputFile >> student2_name;
  InputFile >> student2_test1 >> student2_test2 >> student2_test3;

  
  aver_student1 = (student1_test1 + student1_test2 + student1_test3)/3;
  aver_student2 = (student2_test1 + student2_test2 + student2_test3)/3;  
  InputFile.close();

  OutputFile.open("Final_grade.txt");
  OutputFile << student1_name <<" Final grade: "<<aver_student1<<endl;
  OutputFile << student2_name <<" Final grade: "<<aver_student2;

  OutputFile.close();


}