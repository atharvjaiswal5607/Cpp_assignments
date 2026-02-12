#include<iostream>
using namespace std;

class complex
{
  public:
    float real, imaginary;

    complex()
    {
        real = 0;
        imaginary = 0;
    }

    complex operator+(complex);
    complex operator*(complex);

    friend ostream &operator<<(ostream&, complex&);
    friend istream &operator>>(istream&, complex&);
};

complex complex::operator+(complex n)
{
    complex temp;
    temp.real = real + n.real;
    temp.imaginary = imaginary + n.imaginary;
    return temp;
}

complex complex::operator*(complex n)
{
    complex temp;
    temp.real = (real * n.real) - (imaginary * n.imaginary);
    temp.imaginary = (real * n.imaginary) + (imaginary * n.real);
    return temp;
}

ostream &operator<<(ostream& pr, complex& n)
{
    pr << n.real << " + " << n.imaginary << "i";
    return pr;
}

istream &operator>>(istream& in, complex& n)
{
    in >> n.real >> n.imaginary;
    return in;
}

int main()
{
    complex a, b, c, d;

    cout << "Enter real and imaginary part of first number: ";
    cin >> a;

    cout << "Enter real and imaginary part of second number: ";
    cin >> b;

    c = a + b;
    d = a * b;

    cout << "The sum of the two complex numbers is: " << c << endl;
    cout << "The product of the two complex numbers is: " << d << endl;

    return 0;
}
