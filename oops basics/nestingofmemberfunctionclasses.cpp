#include <iostream>
#include <stdlib.h>
using namespace std;
class binary
{
    //private: is defualu we can write or not
    string s;
    void check();

public:
    void read();
    void ones();
    void display();
};
void binary ::read()
{
    cout << " Enter the number" << endl;
    cin >> s;
}
void binary ::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout << " not a binary number" << endl;
            exit(0);
        }
    }
}
void binary ::ones()
{
    check();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {

            s.at(i) = '0'; //call kr
        }
    }
}
void binary ::display()
{
    cout << "display" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary c;
    c.read();
    // c.check//we cant access this from here.
    //we can call when nesting is done
    c.ones();
    c.display();
    return 0;
}