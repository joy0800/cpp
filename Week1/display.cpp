#include <iostream>
using namespace std;

void display(int a, int b = 10, int c = 20) {
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

int main() {
    display(5);         
    display(5, 15);      
    display(5, 15, 25); 

    return 0;
}
