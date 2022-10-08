#include <iostream>

using namespace std;

int main() {

    string result;
    int x=0;
    cout << "Wpisz Liczbe: ";
    cin >> x;
    result = (x == 0) ? "ZERO" : ((x % 2 == 0) ? "PARZYSTE" : "NIEPARZYSTE");
    cout << result << endl;
}