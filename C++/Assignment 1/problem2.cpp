#include <iostream> 
using namespace std;

class Batsman
{
    private:
        int bcode;
        char bname[20];
        int innings, notout, runs; 
        int batavg;
        void calcavg()
        {
            batavg = runs / (innings - notout);
        }

    public:
        void readddata(); 
        void displaydata();
};

void Batsman::readddata()
{
    cout << "Enter batsman code: "; 
    cin >> bcode;
    while (bcode < 999 || bcode > 10000)
    {
        cout << "Please enter a correct four digit batsman code: "; 
        cin >> bcode;
    }
    cout << "Enter batsman name: "; 
    cin.ignore(1000, '\n'); 
    cin.getline(bname, sizeof(bname)); 
    cout << "Enter amount of innings: "; 
    cin >> innings;
    cout << "Enter amount of notouts: "; 
    cin >> notout;
    cout << "Enter amount of runs: "; 
    cin >> runs;
    calcavg();
}

void Batsman::displaydata()
{
    cout << "\nBatsman code: " << bcode << "\nBatsman name: " << bname
            << "\nInnings: " << innings << "\nNotouts:" << notout
            << "\nRuns: " << runs << "\nBatting average: " << batavg;
}

int main()
{
    Batsman b1; 
    b1.readddata(); 
    b1.displaydata(); 
    return 0;
}