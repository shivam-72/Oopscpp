#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;

    complex(int r=0, int i=0){
        real=r;
        img=i;
    }
    complex operator+(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
int main(){
complex c1(10,5);
complex c2(2,3);
complex c3;
c3=c1 + c2;
cout<<c3.real<<"+i"<<c3.img;
return 0;
}