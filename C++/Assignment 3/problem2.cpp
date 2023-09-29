#include <fstream> 
using namespace std; 
int main()
{
    ofstream fout; 
    fout.open("OUT.TXT");
    char str[300] = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
    fout << str; 
    fout.close(); 
    return 0;
}
