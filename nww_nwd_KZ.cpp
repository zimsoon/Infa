#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int iloczyn;
    int n;
    cout << "Wpisz liczbe a " << endl;
    cin >> a;
    cout << "Wpisz liczbe b " << endl;
    cin >> b;
    iloczyn = a * b;

    while (a != b) {
        if (a < b) {
            b = b - a;
        }
        else {
            a = a - b;
        }
    }
    cout << "Najwiekszy wspolny dzielnik to " << a << endl;
    n = iloczyn / a;
    cout << "Najmniejsza wspolna wielokrotnosc to " << n << endl;
 
}