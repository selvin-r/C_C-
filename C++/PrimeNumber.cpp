#include <iostream>
using namespace std;

int main() {
    int n, c = 0;

    cout << "Enter The Number :" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            c++;
        }
    }

    if (c == 2) {
        cout << "This Is Prime Number" << endl;
    } else {
        cout << "This Is Not Prime Number" << endl;
    }

    return 0;
}
