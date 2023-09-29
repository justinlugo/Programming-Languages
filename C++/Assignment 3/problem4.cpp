#include <fstream> 
using namespace std; 
void blanks()
{
    char ch;
    int count = 0; 
    ifstream fin; 
    fin.open("OUT.TXT");

    while (!fin.eof())
    {
        fin.get(ch);
        if (ch == ' ')
        {
            count++;
        }
    }
    cout << "There are " << count << " blank spaces in the file."; 
    fin.close();
}
