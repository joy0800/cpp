#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw "Division by zero is not allowed!";
        }
        int result = a / b;
        cout << "Result: " << result << endl;
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
    return 0;
}