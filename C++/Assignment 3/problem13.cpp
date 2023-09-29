class Student
{
    char S_Admno[lO];	//Admission number of student 
    char S_Name[30];		//Name of student
    int Percentage;	//Marks Percentage of student 
    public:
        void EnterData()
        {
            gets(S_Admno); 
            gets(S_Name); 
            cin>>Percentage;
        }
        void DisplayData()
        {
            cout << setw(12) << S_Admno; 
            cout << setw(32) << S_Name;
            cout<<setw(3) << Percentage << endl;
        }
        int ReturnPercentage()
        {
            return Percentage;
        }
};

void dispGreater75()
{
    ifstream fin;
    fin.open("STUDENT.DAT", ios::in | ios::out | ios::binary); 
    Student S;
    while (!fin.eof())
    {
        fin.read((char*)&S, sizeof(S)); 
        if (S.ReturnPercentage() > 75)
        {
            S.DisplayData();
        }
    }
    fin.close();
}
