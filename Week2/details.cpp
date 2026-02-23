#include <iostream>
using namespace std;

class Student {
    private:
        int rollNo;
        string name;

    public:
        void getData();   
        void showData();  
};

void Student::getData() {
    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter Name: ";
    cin >> name;
}

void Student::showData() {
    cout << "Roll No: " << rollNo << endl;
    cout << "Name: " << name << endl;
}

int main() {
    Student s;        
    s.getData();     
    s.showData();    

    return 0;
}
