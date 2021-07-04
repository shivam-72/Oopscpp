#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle()
    {               //we cen declare this in parameterized constructer.
        length = 1; //not necessary to write.
        breadth = 1;
    }
    rectangle(int l, int b)
    {                  //int l=1,int b=1; also so if we dont
        setData(l, b); //pass anything then it is set by default.
    }                  //l=1 and b=1.
    rectangle(rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
    void setData(int a, int b)
    {
        length = a;
        breadth = b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    // rectangle r;  this constructer is called by default
    rectangle r1(10, 15); // this is parameterised constructor
    rectangle r2(r1);
    cout << r2.area() << endl;
    cout << r1.area();

    return 0;
}