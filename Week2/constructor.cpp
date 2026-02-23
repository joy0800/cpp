#include <iostream>
using namespace std;

class Hehe {
    private:
        int x;

    public:
        Hehe() {
            x = 0;
            cout << "Default constructor x = " << x << endl;
        }

        Hehe(int a) {
            x = a;
            cout << "Parameterized constructor x = " << x << endl;
        }

        Hehe(Hehe &obj) {
            x = obj.x;
            cout << "Copy constructor x = " << x << endl;
        }

        ~Hehe() {
            cout << "Object is deleted :D" << endl;
        }
};

int main() {
    Hehe s1;          
    Hehe s2(10);      
    Hehe s3 = s2;

    return 0;
}
