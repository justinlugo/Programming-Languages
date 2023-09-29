class computer
{
    char chiptype[10]; 
    int speed; 
    public:
        void getdetails()
        {
            gets(chiptype); 
            cin>>speed;
        }
        void showdetails()
        {
            cout << "Chip" << chiptype << "Speed =" << speed;
        }
};

    // function to read all records present in file SHIP.DAT and display and count them.
void readfile()
{
    int count; 
    computer C; 
    fstream File;
    File.open("SHIP.DAT", ios::in | ios::binary); 
    while(!File.eof())
    {
        File.read((char*)&C, sizeof(C)); 
        count++;
        c.showdetails();
    }
    cout << "Number of records found is: " << count; File.close();
}
