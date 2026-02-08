// writing multiple values to a file and then reading it
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout("numbers.txt");
    int x = 9;
    int y = 7;
    int z = 6;
    fout << x << " " << y << " " << z;
    fout.close();
    ifstream fin("numbers.txt");
    if(!fin)
    {
        cout << "file doesn't exist";
    }
    else
    {
        int a , b , c;
        fin >> a >> b >> c;
        cout << a << "" << b << " " << c;
        fin.close();
    }
    return 0;
}