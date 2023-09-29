#include <fstream> 
using namespace std; 
void wordcount()
{
    char word[30]; 
    int count = 0; 
    ifstream fin;
    fin.open("OUT.TXT");

    while (!fin.eof())
    {
        fin >> word; count++;
    }
    cout << "There are " << count << " words in the file."; 
    fin.close();
}
