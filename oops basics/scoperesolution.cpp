#include <iostream>
using namespace std;
class shop
{
private:
    int itemid[100];
    int price[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void getprice();
    void display();
};
void shop ::getprice()
{
    cout << "The id and price of" << counter + 1 << endl;
    cin >> itemid[counter];
    cin >> price[counter];
    counter++;
}
void shop ::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << itemid[i] << " and " << price[i] << endl;
    }
}
int main()
{
    shop dukkan;
    dukkan.initcounter();
    dukkan.getprice();
    dukkan.getprice();
    dukkan.display();
    return 0;
}