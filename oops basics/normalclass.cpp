#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return (length * breadth);
    }
    int perimeter()
    {
        return (2 * (length + breadth));
    }
};
int main()
{
    rectangle r1;
    r1.length = 15;
    r1.breadth = 20;

    cout << r1.area();
    return 0;
}