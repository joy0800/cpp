#include <iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"Good Morning"<<endl;
    }
};
class derived:public base{
    public:
    virtual void display(){
        cout<<"Good Evening"<<endl;
    }
};
int main(){
    base *b;
    derived d;
    b=&d;
    b->display();
}