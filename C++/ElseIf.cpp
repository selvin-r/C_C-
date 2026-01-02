#include <iostream>

using namespace std;

int main()
{

    int h, l;
    float f;

    cout << "Enter Tha Value of" << endl;
    cin >> h >> l >> f;

    if (h > 50 && f < 0.7 && l > 5600)
    {

        cout << "Steel Grade 10" << endl;
    }
    else if (h > 50 && f < 0.7)
    {

        cout << "Steel Grade 9" << endl;
    }
    else if (f < 0.7 && l > 5600)
    {

        cout << "Steel Grade 8" << endl;
    }
    else if (h > 50 && l > 5600)
    {

        cout << "Steel Grade 7" << endl;
    }

    else if (h > 50 || f < 0.7 || l > 5600)
    {

        cout << "Steel Grade 6" << endl;
    }
    else
    {
        cout << "None Of the Condition are met" << endl;
    }
    return 0;
}