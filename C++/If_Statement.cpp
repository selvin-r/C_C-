#include <iostream>

using namespace std;

/*
the gradest Number Check

*/

int main()
{

    int a, b;

    cout << "Enter The Integer value" << endl;

    cin >> a >> b;

    if (a > b)
    {

        cout << "A IS Tha Greatest Number";
    }
    else if (a == b)
    {

        cout << "Both Are Equal" << endl;
    }

    else
    {

        cout << "B is Tha Greatest Number";
    }

    return 0;
}