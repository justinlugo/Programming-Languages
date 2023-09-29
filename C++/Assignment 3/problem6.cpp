#include <fstream> 
using namespace std; 
void thecount()
{
    char word[30]; 
    int count = 0; 
    ifstream fin;
    fin.open("STORY.TXT");

    while (!fin.eof())
    {
        fin >> word;
        if (strcmpi(word, "the") == 0)
        {
            count++;
        }
    }
    cout << "There are " << count << " 'the' in the file."; 
    fin.close();
}
