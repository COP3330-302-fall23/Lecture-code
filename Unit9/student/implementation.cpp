#include "Student.h"
#include <fstream>
#include <iostream>


Student::Student(ifstream &InputFile, string file_name)
{
   int index=0;
   InputFile.open(file_name); 
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