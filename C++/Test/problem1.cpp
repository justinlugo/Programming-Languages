#include <iostream> 
using namespace std;

class Rectangle
{
    private:
        float length; 
        float width;

    public:
        void setlength(float length); 
        void setwidth(float width); 
        float perimeter();
        float area(); 
        void show();
        int sameArea(Rectangle r3);
};

void Rectangle::setlength(float length)
{
    this->length = length;
}

void Rectangle::setwidth(float width)
{
    this->width = width;
}

float Rectangle::perimeter()
{
    return 2 * (length + width);
}

float Rectangle::area()
{
    return (length * width);
}

void Rectangle::show()
{
    cout << "Length: " << length << " Width: " << width;
}

int Rectangle::sameArea(Rectangle r3)
{
    float area1 = length * width;
    float area2 = r3.length * r3.width;

    if (area1 == area2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    Rectangle r1; 
    Rectangle r2;

    r1.setlength(5); 
    r1.setwidth(2.5);
    cout << "Rectangle 1 | "; 
    r1.show();
    cout << "\nR1 Area: " << r1.area() << " | R1 Perimeter: " << r1.perimeter();

    r2.setlength(5); 
    r2.setwidth(18.9);
    cout << "\nRectangle 2 | "; 
    r2.show();
    cout << "\nR2 Area: " << r2.area() << " | R2 Perimeter: " << r2.perimeter();

    if (r1.sameArea(r2))
    {
        cout << "\nRectangle 1 and 2 have the same area.\n";
    }
    else
    {
        cout << "\nRectangle 1 and 2 do not have the same area.\n";
    }

    r1.setlength(15); 
    r1.setwidth(6.3);
    cout << "\nRectangle 1 | "; 
    r1.show();
    cout << "\nR1 Area: " << r1.area() << " | R1 Perimeter: " << r1.perimeter();

    cout << "\nRectangle 2 | ";

    r2.show();
    cout << "\nR2 Area: " << r2.area() << " | R2 Perimeter: " << r2.perimeter();
    if (r1.sameArea(r2))
    {
        cout << "\nRectangle 1 and 2 have the same area.\n";
    }
    else
    {
        cout << "\nRectangle 1 and 2 do not have the same area.\n";
    }
    return 0;
}
