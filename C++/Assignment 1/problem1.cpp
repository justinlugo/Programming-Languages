#include <iostream>
using namespace std;

class Student
{
    private:
        int admno;
        char sname[20];
        float eng, math, science;
        float total;

        float ctotal()
        {
            return eng + math + science;
        }
    
    public:
        void Takedata();
        void Showdata();
};

void Student::Takedata()
{
    cout << "Enter admission number ";
    cin >> admno;
    cout << "Enter student name: ";
    cin.ignore(1000, '\n');
    cin.getline(sname, sizeof(sname));
    cout << "Enter English score: "; 
    cin >> eng;
    cout << "Enter Math score: "; 
    cin >> math;
    cout << "Enter Science score: ";
    cin >> science;
}

void Student::Showdata()
{
    cout << "\nAdmission number: " << admno << "\nStudent name: "
            << sname << "\nEnglish score: " << eng << "\nMath score: "
            << math << "\nScience score: " << science << "\nTotal: "
            << ctotal();
}

int main()
{
    Student s1; 
    s1.Takedata(); 
    s1.Showdata(); 
    return 0;
}