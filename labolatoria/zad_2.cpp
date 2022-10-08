#include <iostream>

using namespace std;

int main() {

    int x=0;
    cout << "Wpisz Liczbe: ";
    cin >> x;

    if ( x > 0)
    {
        cout << "Liczba jest wieksza niz zero" << endl;
    }
    else if ( x == 0)
    {
        cout << "Liczba jest rowna zero." << endl;
    }
    else
    {
        cout << "Liczba jest mniejsza niz zero" << endl;
    }

    return 0;
    
}