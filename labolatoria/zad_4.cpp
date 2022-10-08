#include <iostream>

using namespace std;

int main() {

    int x=0, y=0, z=0;
    cout << "Wpisz 3 liczby: ";
    cin >> x >> y >> z;
    if ( x > y)
    {
        if ( x > z)
        {
            cout << "Nawieksza liczba to " << x << endl;
        }
        else
        {
            cout << "Najwiekasza liczba to " << z << endl;
        }
    }
    else if ( y > z)
    {
        cout << "Najwiekasza liczba to " << y << endl;
    }
    else
    {
        cout << "Najwiekasza liczba to " << z << endl;        
    }

    return 0;
}