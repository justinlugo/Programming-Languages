#include <fstream> 
using namespace std; 
void copyupper()
{
    char ch; 
    ifstream fin;
    fin.open("FIRST.TXT"); 
    ofstream fout; 
    fout.open("SECOND.TXT");

    while (!fin.eof())
    {
        fin.get(ch);
        ch = toupper(ch); fout << ch;
    }
    fin.close();
    fout.close();
}
