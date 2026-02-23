#include <iostream>
using namespace std;
class display{
    private:
        int salary;
    public:
        display(int s){
            salary=s;
        }
    friend void dismsg(display d);
};
void dismsg(display d){
    
    cout<<d.salary<<endl;
}
int main(){
    display d(1000);
    dismsg(d);
    return 0;
}