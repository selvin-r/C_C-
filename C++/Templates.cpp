
// Templates In C++
#include <iostream>
using namespace std;

template <class T>
void mySwap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 10, b = 20;
    char x = 'A', y = 'B';

    cout << "Before Swap" << endl;
    cout << a << endl;
    cout << b << endl;

    mySwap(a, b); // template argument deduction works automatically

    cout << "After Swap" << endl;
    cout << a << endl;
    cout << b << endl;

    cout << "Before Swap" << endl;
    cout << x << endl;
    cout << y << endl;

    mySwap(x, y);

    cout << "After Swap" << endl;
    cout << x << endl;
    cout << y << endl;

    return 0;
}
