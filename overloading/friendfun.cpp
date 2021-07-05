//with the help of friend function we can access the the private
//members outside the class.
#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << "+i" << img;
    }
    friend complex operator+(complex c1, complex c2);
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
    complex c3;
    complex c1(2, 4);
    complex c2(6, 7);
    c3 = operator+(c1, c2); //  or        //c3=c1+c2;
    c3.display();
    return 0;
}