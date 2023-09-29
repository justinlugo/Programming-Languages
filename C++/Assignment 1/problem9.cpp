#include <iostream> 
using namespace std;

class Distance
{
    private:
        int feet; 
        float inches;

    public:
        void set (int feet, float inches); 
        void disp();
        Distance add(Distance D);
};

void Distance::set (int feet, float inches)
{
    this->feet = feet; this->inches = inches;
}

void Distance::disp()
{
    cout << feet << "ft, " << inches << "in";
}

Distance Distance::add(Distance D)
{
    Distance t;
    t.inches = inches + D.inches; 
    t.feet = 0;
    if (t.inches >= 12.0)
    {
        t.inches -= 12.0;
        t.feet += 1.0;
    }
    t.feet += feet + D.feet; 
    return t;
}

int main()
{
    Distance D1, D2, D3;
    D1.set(7, 8.4);
    cout << "D1 = "; 
    D1.disp();

    D2.set(5, 6.9);
    cout << "\nD2 = "; 
    D2.disp();

    D3 = D1.add(D2);
    cout << "\nD3 = D1 + D2 = "; 
    D3.disp();

    return 0;
}
