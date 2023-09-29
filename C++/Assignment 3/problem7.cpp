#include <fstream> 
using namespace std; 
void countA()
{
    char str[80]; 
    int count = 0; 
    ifstream fin;
    fin.open("STORY.TXT");

    while (!fin.eof())
    {
        fin.getline(str,80); if (str[0] != 'A')
        {
            count++;
        }
    }
    cout << "There are " << count << " number of lines not starting with 'A' in the file.";
    fin.close();
}
