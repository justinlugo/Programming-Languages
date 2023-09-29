#include <iostream> 
#include <string> 
using namespace std;

class Flight
{
    private:
        int FlightNumber;
        string Destination; 
        float Distance; float Fuel;
        void CALFUEL()
        {
            if (Distance <= 1000)
            {
                Fuel = 500;
            }
            else if (Distance > 1000 && Distance <= 2000)
            {
                Fuel = 1100;
            }
            // Distance larger than 2000. else
            {
                Fuel = 2200;
            }
        }

    public:
        void feedInfo(); void showInfo();
};

void Flight::feedInfo()
{
    cout << "Enter flight number: "; 
    cin >> FlightNumber;
    cout << "Enter destination: "; 
    cin.ignore(1000, '\n'); 
    getline(cin, Destination); 
    cout << "Enter distance: "; 
    cin >> Distance;
    CALFUEL();
}

void Flight::showInfo()
{
    cout << "\nFlight number: " << FlightNumber << "\nDestination: "
            << Destination << "\nDistance: " << Distance
            << "\nAmount of fuel required: " << Fuel;
}

int main()
{
    Flight f1; 
    f1.feedInfo(); 
    f1.showInfo(); 
    return 0;
}
