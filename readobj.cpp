// reading an object from a file 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Student
{
    public :
    int roll;
    string name;
    void show()
    {
        cout << "roll number = " << roll << endl;
        cout << "name = " << name;
    }
    
};
int main()
{
    Student s;
    ifstream fin("Student.txt");
    fin >> s.roll >> s.name;
    s.show();
    fin.close();
    return 0;
}