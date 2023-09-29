#include <fstream> 
using namespace std; 
void vowelwords()
{
    char word[30]; 
    ifstream fin; 
    fin.open("FIRST.TXT"); 
    ofstream fout;
    fout.open("SECOND.TXT");

    while (!fin.eof())
    {
        fin >> word;
        if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o'
            || word[0] == 'u')
        {
            fout << word << " ";
        }
    }
    fin.close();
    fout.close();
}
