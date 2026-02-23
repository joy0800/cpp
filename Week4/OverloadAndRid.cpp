#include <iostream>
using namespace std;

class sample {
public:
    int lastResult; 

    virtual int show(int a, int b) {
        lastResult = a + b;
        return lastResult;
    }

    int show(int a, int b, int c) {
        return a + b + c;
    }

    sample operator + (sample s) {
        sample temp;
        temp.lastResult = this->lastResult + s.lastResult;
        return temp;
    }
};

class child : public sample {
public:
    int show(int a, int b) {  
        lastResult = a * b;
        return lastResult;
    }
};

int main() {
    sample s;
    child c;

    cout << "a + b = " << s.show(1,2) << endl;       
    cout << "a + b + c = " << s.show(1,2,3) << endl; 

    sample *sp = &c;
    cout << "a*b = " << sp->show(1,2) << endl;      

    sample s1, s2, s3;
    s1.show(5, 5);    
    s2.show(3, 2);   

    s3 = s1 + s2;     
    cout << "s1 + s2 (operator overloading) = " << s3.lastResult << endl;

    return 0;
}
