#include <fstream> 
using namespace std; 
void alphabets()
{
    char ch;
    int count = 0; 
    ifstream fin; 
    fin.open("OUT.TXT");

    while (!fin.eof())
    {
        fin.get(ch);
        if (isalpha(ch))
        {
            count++;
        }
    }
    cout << "There are " << count << " alphabets in the file."; 
    fin.close();
}
