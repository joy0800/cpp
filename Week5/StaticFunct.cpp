#include <iostream>
using namespace std;
class human{
    public:
        static int n;
        static void show(){
            cout<<n*n<<endl;
        }
};
int human::n=20;
int main(){
    human::show();
    return 0;
}