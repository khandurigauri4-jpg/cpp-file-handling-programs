// writing object to a binary file
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
        cout << "enter roll number and name ";
        cin >> roll >> name;
    }
    
};
int main()
{
    Student s;
    ofstream fout("Student.txt" , ios::binary);
    s.get();
    fout.write((char*)&s , sizeof(s));
    fout.close();
    return 0;
}