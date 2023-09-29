class EMPLOYEE
{
    int ENO;
    char ENAME[10];

    public :
        void GETIT()
        {
            cin >> ENO; 
            gets (ENAME);
        }
        void SHOWIT()
        {
            cout <<ENO << ENAME <<endl;
        }
};
//function to write objects of employee to binary file 
void write()
{
    Employee E; 
    E.GETIT();
    fstream File;
    File.open("EMP.DAT", ios::in | ios::binary); if (!File)
    {
        cout << "Error opening file.\n"; 
        return;
    }
    File.write((char*)&E, sizeof(E)); 
    File.close();
    cout << "Objects written to file.\n"; 
    return;
}

//function to read objects from binary file and display them on screen 
void read()
{
    Employee E; 
    fstream File;
    File.open("EMP.DAT", ios::in | ios::binary); 
    if (!File)
    {
        cout << "Error opening file.\n"; 
        return;
    }
    if (file.read((char*)&E, sizeof(E)))
    {
        cout << endl << endl;
        cout << "Objects fully extracted.\n"; 
        E.SHOWIT();

    }
    else
    {
        cout << "Error reading data.\n"; 
        return;
    }

    File.close(); 
    return;
}
