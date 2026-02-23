#include <iostream>
using namespace std;

class Parent {
public:
    void showParent() {
        cout << "This is parent class" << endl;
    }
};

class Child1 : public Parent {
public:
    void showChild1() {
        cout << "This is child 1 class" << endl;
    }
};

class Child2 : public Parent {
public:
    void showChild2() {
        cout << "This is Child 2 class" << endl;
    }
};

int main() {
    Child1 obj1;
    Child2 obj2;

    obj1.showParent();
    obj1.showChild1();
    obj2.showParent();
    obj2.showChild2();

    return 0;
}