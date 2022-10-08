#include <iostream>
using namespace std;

int main() {

    int x=0;
    cout << "Wpisz Liczbe: ";
    cin >> x;

    if ( x < 0)
        x = -x;
    cout << '\n' << x << '\n';

    return 0;
}