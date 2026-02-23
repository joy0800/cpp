#include <iostream>
using namespace std;
class Demo {
public:
    Demo() {
        cout << "constructor called " << endl;
    }
    ~Demo() {
        cout << "Destructor called " << endl;
    }
};

int main() {
    cout << "creating objects: " << endl;
    Demo ob1, ob2, ob3;
    cout << "End of main function" << endl;
    return 0;
}