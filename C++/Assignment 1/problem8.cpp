#include <iostream> 
using namespace std;

class complex
{
    private:
        float real; 
        float img;

    public:
        void set (float real, float img); 
        complex sum(complex C);
        void disp();
};

void complex::set (float real, float img)
{
    this->real = real; 
    this->img = img;
}

complex complex::sum(complex C)
{
    complex t;
    t.real = real + C.real; t.img = img + C.img; 
    return t;
}

void complex::disp()
{
    cout << real << " + " << img << "i";
}

int main()
{
    complex C1, C2, C3; C1.set(5.9,3.4);
    cout << "Complex Number 1 = "; 
    C1.disp();

    C2.set(3.6,8.7);
    cout << "\nComplex Number 2 = "; 
    C2.disp();

    C3 = C1.sum(C2);
    cout << "\nComplex Number 3 = "; 
    C3.disp();
    return 0;
}
