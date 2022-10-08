#include <iostream>

using namespace std;

int main() {

    int x=0, y=0, z=0;
    cout << "Wpisz 3 liczby: ";
    cin >> x >> y >> z;
    
    if ( x == y || x == z || y == z)
    {
        cout << "Sa duplikaty" << endl;
    }
    else
    {
        cout << "Nie na duplikatow" << endl;
    }
    
    return 0;
}