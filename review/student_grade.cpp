#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  string studentname;
  string studentname_in_list;
  double student_test1;
  double student_test2;
  double student_test3;
  double aver_grade;
  bool flag;

  int option;
  ifstream InputFile;
  ofstream OutputFile;

  InputFile.open("student_list.txt");

  if(!InputFile)
  {
    cout<<"Error: the path or files does not exist"<<endl;
    exit(1);
  }

  
  cout<<right<<setfill('*')<<setw(25);
  cout<<" Menu ";
  cout<<right<<setfill('*')<<setw(20)<<"."<<endl;
  cout<<"1. Find the student in the list. "<<endl;
  cout<<"2. Compute the final grade of one student."<<endl;
  cout<<"3. Compute the final grade of all the students."<<endl;
  cout<<right<<setfill('*')<<setw(45)<<"."<<endl;
  cin >> option;

  switch (option)
  {
  case 1:
        flag = false;
        cout<<"Provide the student name: ";
        cin >> studentname;

        while(!InputFile.eof())
        {
            InputFile >> studentname_in_list;
            InputFile >> student_test1 >> student_test2 >> student_test3;
            if(studentname_in_list==studentname)
            {
                cout<< "Student"<< studentname << "is in the list"<<endl;
                cout<< "Grades: "<<student_test1<< ", "<<student_test2<<", "<<student_test3<<endl;  
                flag = true;
                break;
            }
        }

        if(!flag)
        {
         cout<<"The student is not in the list. "<<endl;
        }
    /* code */
    break;
    case 2:
        flag = true;
        cout<<"Provide the student name: ";
        cin >> studentname;

        while(!InputFile.eof())
        {
            InputFile >> studentname_in_list;
            InputFile >> student_test1 >> student_test2 >> student_test3;
            if(studentname_in_list==studentname)
            {
                cout<< "Student"<< studentname << "is in the list"<<endl;
                cout<< "Grades: "<<student_test1<< ", "<<student_test2<<", "<<student_test3<<endl;  
                cout<<"Final grade: "<<(student_test1+student_test2+student_test3)/3<<endl;
                break;
            }
        }

        if(!flag)
        {
         cout<<"The student is not in the list. "<<endl;
        }
  
  default:
    break;
  }


//   InputFile >> student1_name;
//   InputFile >> student1_test1 >> student1_test2 >> student1_test3;

//   InputFile >> student2_name;
//   InputFile >> student2_test1 >> student2_test2 >> student2_test3;

  
//   aver_student1 = (student1_test1 + student1_test2 + student1_test3)/3;
//   aver_student2 = (student2_test1 + student2_test2 + student2_test3)/3;  
//   InputFile.close();

//   OutputFile.open("Final_grade.txt");
//   OutputFile << student1_name <<" Final grade: "<<aver_student1<<endl;
//   OutputFile << student2_name <<" Final grade: "<<aver_student2;

//   OutputFile.close();


}