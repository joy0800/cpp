#include <iostream>

void swapInt(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

void swapFloat(float &x, float &y)
{
    float z;
    z = x;
    x = y;
    y = z;
}

int main()
{
    int a,b;
    float x,y;
    std::cout << "Enter two Integers: ";
    std::cin >> a >> b;
    std::cout << "Enter two Floating Point Numbers: ";
    std::cin >> x >> y;
    
    swapInt(a, b);
    swapFloat(x, y);

    std::cout << "Swapped Integers: " << a << " " << b << std::endl;
    std::cout << "Swapped Floating Point Numbers: " << x << " " << y;
    return 0;
}
