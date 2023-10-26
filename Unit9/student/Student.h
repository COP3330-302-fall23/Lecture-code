#include <string>
using namespace std;

class Student
{
    private:
         string name[7];
         double grades[7][3];
         int array_size;

    public:

    Student(){};
    Student(ifstream &InputFile, string file_name);
    void find_student(ifstream &InputFile);
    void compute_final_grade(ifstream &InputFile);
    void compute_final_grade(ifstream &InputFile);
    void compute_all_grades(ifstream &InputFile, string name_outputFile);
    void load_name(ifstream &InputFile, string name[]);
    void load_grades(ifstream &InputFile, double grades[][3]);

};