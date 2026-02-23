// a) Single inheritance
// Program:
#include <iostream>
using namespace std;
class Parent {
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
    obj.showParent();
    obj.showChild();
    return 0;
}