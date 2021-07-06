#include <iostream>
using namespace std;
class employee
{
private:
    string name;
    int eid;

public:
    employee(int id, string Name)
    {
        eid = id;
        name = Name;
    }
    string getname()
    {
        return name;
    }
    int getid()
    {
        return eid;
    }
};
class parttime : public employee
{
private:
    int wage;

public:
    parttime(int id, string Name, int w) : employee(id, Name)
    {
        wage = w;
    }
    int getwage()
    {
        return wage;
    }
};
class fulltime : public employee
{
private:
    int salary;

public:
    fulltime(int id, string Name, int sal) : employee(id, Name)
    {
        salary = sal;
    }
    int getsalary()
    {
        return salary;
    }
};
int main()
{
    parttime p1(1, "shivam", 300);
    fulltime p2(2, "soham", 2000);
    cout << "part time salaray of id " << p1.getid() << " of name " << p1.getname() << " is "
         << p1.getwage()<<endl;
    cout << "full time salaray of id " << p1.getid() << " of name " << p1.getname() << " is "
         << p2.getsalary();
    return 0;
}