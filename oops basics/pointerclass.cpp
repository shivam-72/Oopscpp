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
int main(){
    rectangle r1;
    rectangle *ptr;
    ptr=&r1;
    ptr->length=10;
    ptr->breadth=15;
    cout<<ptr->area();
    
}