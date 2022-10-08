#include <iostream>

using namespace std;

int main() {

    int x=0, y=0, z=0;
    cout << "Wpisz 3 liczby: ";
    cin >> x >> y >> z;
    
    if (x < y && y < z)
    {
        cout << "Liczby sa w porzodku rosnacym" << endl;
    }
    else
    {
        cout << "Liczny nie sa w porzodku rosnacym" << endl;
    }
    
    
    return 0;
}