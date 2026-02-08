// writing object to a file and then reading it
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Student
{
    public :
    int roll;
    string name;
    void get()
    {
        cout << "enter roll number and name \n";
        cin >> roll >> name;
    }
    
};
int main()
{
    Student s;
    ofstream fout("Student.txt");
    s.get();
    fout << s.roll <<" " << s.name;
    fout.close();
}