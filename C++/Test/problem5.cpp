#include <iostream> 
using namespace std;

class cashRegister
{
    private:
        int cashOnHand;

    public:
        cashRegister(); 
        cashRegister(int cashOnHand); 
        int getCurrentBalance();
        void acceptAmount(int amountIn);
};

class dispenserType
{
    private:
        int numberOfItems; 
        int cost;

    public:
        dispenserType();
        dispenserType(int numberOfItems, int cost); 
        int getNoOfItems();
        int getCost(); 
        void makeSale();
};

cashRegister::cashRegister()
{
    cashOnHand = 500;
}
cashRegister::cashRegister(int cashOnHand)
{
    this->cashOnHand = cashOnHand;
}

int cashRegister::getCurrentBalance()
{
    return cashOnHand;
}

void cashRegister::acceptAmount(int amountIn)
{
    this->cashOnHand += amountIn;
}

dispenserType::dispenserType()
{
    numberOfItems = 50;
    cost = 50;
}

dispenserType::dispenserType(int numberOfItems, int cost)
{
    this->numberOfItems = numberOfItems; 
    this->cost = cost;
}

int dispenserType::getNoOfItems()
{
    return numberOfItems;
}

int dispenserType::getCost()
{
    return cost;
}

void dispenserType::makeSale()
{
    numberOfItems--;
}

void showSelection()
{
    cout << "Welcome to Our Candy Shop\nSelect an item to buy:\n"; 
    cout << "1 | Candy\n2 | Chips\n3 | Gum\n4 | Cookies\n5 | Leave\n";
}

void sellProduct(dispenserType& product, cashRegister& cash)
{
    int amount1, amount2, change; 
    if (product.getNoOfItems() > 0)
    {
        cout << "Please insert " << product.getCost() << ".\n"; cin >> amount1;

        if (amount1 < product.getCost())
        {
            cout << "You inserted " << amount1 << ". Please insert another " << product.getCost() - amount1 << ".\n";
            cin >> amount2; amount1 += amount2;
        }

        if (amount1 >= product.getCost())
        {
            if (amount1 == product.getCost())
            {
                cash.acceptAmount(amount1); 
                product.makeSale();
                cout << "Please take your item.\n\n";
            }
            // Have to give back change. else
            {
                // product = 20
                // amount1 = 30
                // change = amount1 - product = 10; 
                change = amount1 - product.getCost(); 
                cash.acceptAmount(product.getCost()); 
                product.makeSale();
                cout << "Please take your item and your change: " << change << ".\n\n";
            }
        }
        else
        {
            cout << "Not enough cash, ejecting amount entered.\n\n";
        }
    }
    else
    {
    cout << "This product is sold out. Try another item.\n\n";
    }
}

int main()
{
    int choice; 
    cashRegister cash;
    dispenserType candy(5, 20);
    dispenserType chips(3, 25);
    dispenserType gum(4, 15);
    dispenserType cookies(5, 30);

    showSelection(); 
    cin >> choice;

    while (choice != 5)
    {
        switch (choice)
        {
            case 1:
                sellProduct(candy, cash); 
                break;

            case 2:
                sellProduct(chips, cash); 
                break;

            case 3:
                sellProduct(gum, cash); 
                break;

            case 4:
                sellProduct(cookies, cash); 
                break;

            default:
                cout << "Please enter a valid number.\n";
        }
        showSelection(); cin >> choice;
    }
    return 0;
}