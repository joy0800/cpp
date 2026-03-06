#include <iostream>
using namespace std;

int main() {
    try {
        int ch;
        cout << "Enter 1 for int exception" << endl;
        cout << "Enter 2 for char exception " << endl;
        cout << "Enter your Choice: ";
        cin >> ch;

        if (ch == 1)
            throw 100;
        else if (ch == 2)
            throw 'A';
        else
            throw 3.14;
    }
    catch (...) {
        cout << "Caught an unknown exception!" << endl;
    }

    return 0;
}