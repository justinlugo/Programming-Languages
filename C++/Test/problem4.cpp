#include <iostream> 
using namespace std;

class Time
{
    private:
        int hours; 
        int minutes;

    public:
        void settime(int hours, int minutes); 
        Time sum(Time T);
        void showtime();
};

void Time::settime(int hours, int minutes)
{
    this->hours = hours; 
    this->minutes = minutes;
}

Time Time::sum(Time T)
{
    Time t;
    t.minutes = minutes + T.minutes; 
    t.hours = t.minutes / 60; 
    t.minutes = t.minutes % 60; 
    t.hours += hours + T.hours; 
    return t;
}

void Time::showtime()
{
    if (minutes < 10)
    {
        cout << hours << ":0" << minutes;
    }
    else
    {
        cout << hours << ":" << minutes;
    }
}

int main()
{
    Time T1, T2, T3;

    T1.settime(4,17); 
    cout << "Time 1 = "; 
    T1.showtime();
    T2.settime(7,45);
    cout << "\nTime 2 = "; 
    T2.showtime();

    T3 = T1.sum(T2);
    cout << "\nTime 3 = T1 + T2 = "; 
    T3.showtime();
    return 0;
}
