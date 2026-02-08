// writing data to a file and then reading it
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout;
    fout.open("student.txt");          // creating and opening a file
    fout << " Hello world ";
    fout.close();
    ifstream fin;
    fin.open("student.txt");
    char ch;
    if(!fin)                         // checking if a file exists
    {
    cout << "file doesn't exist";
    }
    else
    {
        while(fin.get(ch))
        {
            cout << ch;
        }
    }
    fin.close();
    

    return 0;
}