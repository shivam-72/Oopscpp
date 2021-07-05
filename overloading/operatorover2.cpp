#include<iostream>
using namespace std;
class rational{
    private:
    int p;
    int q;
    public:
    rational(int a=1,int b=1){
        p=a;
        q=b;
    }
    friend rational operator+(rational a,rational b);
    friend ostream & operator<<(ostream &out,rational r);
};
rational operator+(rational a,rational b){
    rational temp;
    temp.p=a.p+b.p;
    temp.q=a.q+b.q;
    return temp;
    }
    ostream &operator<<(ostream &out, rational r){
        out<<r.p<<"/"<<r.q;
        return out;
    }
int main(){
    rational r1(4,6);
    rational r2(3,2);
    rational r3;
    r3=operator+(r1,r2);
    cout<<r3;
    cout<<endl;
    cout<<r1;
}