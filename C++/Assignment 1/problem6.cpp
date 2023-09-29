#include <iostream> 
using namespace std;

class REPORT
{
    private:
        int adno;
        char name[20]; 
        float marks[5]; 
        float average; 
        void GETAVG()
        {
            average = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
        }

    public:
        void READINFO(); 
        void DISPLAYINFO();
};

void REPORT::READINFO()
{
    cout << "Enter admission number: "; 
    cin >> adno;
    while (adno < 999 || adno > 10000)
    {
        cout << "Please enter a correct four digit admission number: "; 
        cin >> adno;
    }
    cout << "Enter name: "; 
    cin.ignore(1000, '\n'); 
    cin.getline(name, sizeof(name));
    cout << "Enter marks in...\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << (i + 1) << ": "; 
        cin >> marks[i];
    } 
    GETAVG();
}

void REPORT::DISPLAYINFO()
{
    cout << "\nAdmission number: " << adno << "\nName: " << name
            << "\nMarks: " << marks[0] << ", " << marks[1] << ", "
            << marks[2] << ", " << marks[3] << ", " << marks[4]
            << "\nAverage: " << average;
}

int main()
{
    REPORT r1; 
    r1.READINFO(); 
    r1.DISPLAYINFO();
    return 0;
}
