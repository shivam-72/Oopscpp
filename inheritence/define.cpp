//we can not directly accces the the private data in inherited 
// class also we should use get data and set data. 
#include<iostream>
using namespace std;
class done{
    private:
    int x;
    public:
    void setdata(int a){
        x=a;
    }
    int getdata(){
        return x;
    }
    void display(){
        cout<<"the value is"<<x;
    }
};
class inherited:public done{
    private:
    int y;
    public:
    void show(){
        cout<<"the value is "<<y;
    }
};
int main()
{
   done d;
   inherited e;
   d.setdata(4);
   e.setdata(5);
   cout<<e.getdata(); 
    return 0;
}