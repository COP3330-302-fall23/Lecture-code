#include <string>

using namespace std;
class PersonType
{
    private:
        string first_name;
        string last_name;
        string middle_name;

    public:
        PersonType(){};
        PersonType(string fName, string lName, string mName);
        ~PersonType();
        void print();
        void set_firstName(string fName);
        void set_lastName(string lName);
        void set_middleName(string mName);
        bool comparing_firstName(string fName);
        bool comparing_lastName(string lName);
};