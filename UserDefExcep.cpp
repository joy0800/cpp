// Write a Program to demonstrates user defined exceptions
#include <iostream>
using namespace std;
class InvalidMarksException {
public:
    void display() {
        cout << "Invalid marks entered! Marks should be between 0 and 100." << endl;
    }
};
int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    try {
        if (marks < 0 || marks > 100) {
            throw InvalidMarksException();
        }
        cout << "Marks entered: " << marks << endl;
    }
    catch (InvalidMarksException& e) {
        e.display();
    }
    return 0;
}