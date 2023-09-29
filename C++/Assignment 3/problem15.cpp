class STUD
{
    int Rno;
    char Name[20]; 
    public:
        void Enter()
        {
            cin >> Rno; 
            gets(Name); 
        } 
        void Display()
        {
            cout << Rno << Name << endl;
        }
};

void addRecord()
{
    ofstream File; File.open("STUDENT.DAT", ios::out); 
    STUD S;
    char ch = 'Y';
    while (ch == 'Y' || ch == 'y')
    {
        S.Enter();
        File.write((char*)&S, size of(S)); cout << "More data? (Y/N)";
        cin >> ch;
    }
    File.close();
}
