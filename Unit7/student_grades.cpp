#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void find_student(ifstream &InputFile);
void compute_final_grade(ifstream &InputFile);
void compute_final_grade(ifstream &InputFile);
void compute_all_grades(ifstream &InputFile, string name_outputFile);
void load_name(ifstream &InputFile, string name[]);
void load_grades(ifstream &InputFile, double grades[][3]);
int menu();


int main()
{
  ifstream InputFile;
  int option;
  string name_outputFile, resp;
  string name[7];
  double grades[7][3];

do{
    option = menu();

    switch (option)
    {
    case 1:
        find_student(InputFile);
        break;
    case 2:
        compute_final_grade(InputFile);
        break;
    case 3:
        cout<<"Write output file name: ";
        cin >> name_outputFile;
        compute_all_grades(InputFile,name_outputFile);  
        break; 
    case 4:
         cout<<"Loading student's names. "<<endl;
         load_name(InputFile,name); 
         for(int i=0; i< 7; i++){cout<<name[i]<<endl;} 
    case 5:
         cout<<"Loading students' grades: "<<endl;
         load_grades(InputFile,grades);
         for(int i=0; i<7; i++)
         {
            for(int j=0; j<3; j++)
            {
                cout<<grades[i][j]<<" ";
            }
            cout<<endl;
         }
    default:
        break;
    }
    cout<<"Do you want to select other option: ";
    cin >> resp; 
}while(resp == "yes");
}

/********************************************************************************************************************************
*
*                                                       USER-DEFINED FUNCTIONS
*
*********************************************************************************************************************************/


void find_student(ifstream &InputFile)
{
    string student_name, student_list; 
    bool flag;  
    double test1, test2, test3;
    cout<<"Write the student's name: ";
    cin >> student_name;
    flag = true;

    InputFile.open("student_list.txt"); 
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
    InputFile.close();
}

void compute_final_grade(ifstream &InputFile)
{
    string student_name, student_list; 
    bool flag;  
    double test1, test2, test3;
    cout<<"Write the student's name: ";
    cin >> student_name;
    flag = true;

    InputFile.open("student_list.txt"); 
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
    InputFile.close();
}

int menu()
{
    int option;
      cout<<right<<setfill('*')<<setw(25)<<" Menu "<<setfill('*')<<setw(20)<<"."<<endl;
 cout<<"1. Find a student in the list. "<<endl;
 cout<<"2. Compute the student's final grade. "<<endl;
 cout<<"3. Compute all students' final grade. "<<endl;
 cout<<"4. load students' names: "<<endl;
 cout<<"5. load stundets' grades: "<<endl;
 cout<<right<<setfill('*')<<setw(45)<<"."<<endl;
 cout<<"Select an option: "; 
 cin >> option;
  return option;
}

void compute_all_grades(ifstream &InputFile, string name_outputFile)
{
    string student_list; 
    double test1, test2, test3;

    ofstream OutputFile;
    OutputFile.open(name_outputFile);

    InputFile.open("student_list.txt"); 
    while(!InputFile.eof())
    {
        InputFile >> student_list;
        InputFile >> test1 >> test2 >> test3;
        OutputFile << student_list <<"-->";
        OutputFile << "Final grade: "<<(test1+test2+test3)/3<<endl;
    }   
    InputFile.close();
}


void load_name(ifstream &InputFile, string name[])
{
   int index=0;
   InputFile.open("student_list.txt"); 
   if(!InputFile)
    {
        cout<<"Error: The path or the file does not exist."<<endl;
        exit(1);
    }

    while(!InputFile.eof())
    {
        InputFile >> name[index];
        InputFile.ignore(1000,'\n');
        index++;
    }
   InputFile.close();
}

void load_grades(ifstream &InputFile, double grades[][3])
{
   int index=0;
   InputFile.open("student_list.txt"); 
   if(!InputFile)
    {
        cout<<"Error: The path or the file does not exist."<<endl;
        exit(1);
    }

    while(!InputFile.eof())
    {
        InputFile.ignore(100,' ');
        for(int j=0; j<3; j++)
        {
            InputFile >> grades[index][j];
        }
        index++;
    }
    InputFile.close();
}

void edit_student_name(string name[], int size_array)
{
    string old_name, new_name;
    cout<<"Write the student name: ";
    cin >> old_name;
    cout<<endl<<"Provide new name: ";
    cin >> new_name;
    for(int i=0; i<size_array; i++)
    {
        if(old_name == name[i])
        {
            name[i] = new_name;
            break;
        }
    }
}