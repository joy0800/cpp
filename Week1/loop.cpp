#include <iostream>
using namespace std;

int main()
{
    int n;
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            std::cout << j+1 << " ";
        std::cout << std::endl;
    }   
    return 0;
}
