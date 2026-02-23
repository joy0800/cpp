#include <iostream>
using namespace std;
class Grandparent {
public:
    void showGrandParent() {
        cout << "This is Grand Parent Class" << endl;
    }
};

class Parent : public Grandparent {
public:
    void showParent() {
        cout << "This is Parent Class" << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "This is Child Class" << endl;
    }
};

int main() {
    Child obj;
    obj.showGrandParent();
    obj.showParent();
    obj.showChild();
    return 0;
}