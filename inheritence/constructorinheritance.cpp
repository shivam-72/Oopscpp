#include<iostream>
using namespace std;
class rectangle{
    public:
    int x;
    int y;
    rectangle(){
        cout<<"non param of rectangle";
    }
    rectangle(int x,int y){
       cout<< "param of rectangle";
    }
};
class cuboid:public rectangle{
    public:
    int z;
    cuboid(){
        cout<<"non param of cuboid";
    }
    cuboid(int z){
        cout<<"param of a";
    }
    cuboid(int x,int y,int z):rectangle(x,y){
        cout<<"param of a"; 
    }
};
int main(){
    cuboid c1(3);

}