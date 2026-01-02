#include <iostream>

using namespace std;

int main()
{

    char c;
    cout << "Enter the Character" << endl;
    cin >> c;

    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {

        cout << "This Is Vowels Letters" << endl;
    }
    else
    {
        cout << "This Is Consonant Letters" << endl;
    }

    return 0;
}