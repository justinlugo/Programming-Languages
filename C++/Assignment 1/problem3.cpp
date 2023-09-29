#include <iostream> 
#include <string> 
using namespace std;

class TEST
{
    private:
        int TestCode; 
        string Description; 
        int NoCandidate; 
        int CenterReqd; 
        int CALCNTR()
        {
            return (NoCandidate / 100) + 1;
        }

    public:
        void schedule(); 
        void dispTest();
};

void TEST::schedule()
{
    cout << "Enter test code: "; 
    cin >> TestCode;
    cout << "Enter description: "; 
    cin.ignore(1000, '\n'); 
    getline(cin, Description);
    cout << "Enter number of candidates: "; 
    cin >> NoCandidate;
    CenterReqd = CALCNTR();
}

void TEST::dispTest()
{
    cout << "\nTest code: " << TestCode << "\nDescription: " << Description
            << "\nNumber of candidates: " << NoCandidate << "\nCenter required: "
            << CenterReqd;
}

int main()
{
    TEST t1;
    t1.schedule(); 
    t1.dispTest(); 
    return 0;
}
