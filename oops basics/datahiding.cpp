// accessor=get        mutator=set  both are methods
// here we can also validate set method so user can not write
//the value which is not applicable.
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
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
    rectangle r;
    r.setData(12, 13);
    cout << r.area();
    return 0;
}