#include <iostream>
using namespace std;
class Father {
public:
    void showFather() {
        cout << "This is father Class" << endl;
    }
};

class Mother {
public:
    void showMother (){
        cout << "This is mother class" << endl;
    }  
};

class Child: public Father, public Mother {
public:
    void showChild() {
        cout << "This is Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.showChild();
    obj.showFather();
    obj.showMother();
} 