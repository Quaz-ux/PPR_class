#include <iostream>

using namespace std;

int main() {

    int x=0;
    cout << "Wpisz liczbe: ";
    cin >> x;
    
    if ( 1 <= x >= 10 || 17 <= x >= 21)
    {
        cout << "Podana liczba jest z przedialu  <1,10> lub <17,21>." << endl;
    }
    else
    {
        cout << "Podana liczba nie jest z zadnego przedialu." << endl;
    }
    
    
    return 0;
}