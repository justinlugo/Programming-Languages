#include <iostream> 
using namespace std;

class BOOK
{
    private:
        int BOOKNO;
        char BOOKTITLE[20];
        float PRICE;
        float TOTAL_COST(int N)
        {
            return PRICE * N;
        }

    public:
        void INPUT(); 
        void PURCHASE();
};

void BOOK::INPUT()
{
    cout << "Enter book number: "; 
    cin >> BOOKNO;
    cout << "Enter book title: "; 
    cin.ignore(1000, '\n'); 
    cin.getline(BOOKTITLE, sizeof(BOOKTITLE)); 
    cout << "Enter price per copy: ";
    cin >> PRICE;
}

void BOOK::PURCHASE()
{
int n;
cout << "Enter how many copies you intend to purchase: "; 
cin >> n;
cout << "Total cost: " << TOTAL_COST(n);
}

int main()
{
    BOOK b1; 
    b1.INPUT(); 
    b1.PURCHASE();
    return 0;
}
