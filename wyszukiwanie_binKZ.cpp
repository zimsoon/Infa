#include <iostream>
using namespace std;

int main()
{
	int a=0;
	int b=15;
	int sr;
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	int c;
	cout << "Podaj liczbe, która chcesz znalezc: ";
	cin >> c;
    sr = (a + b) / 2;
    
	while (a <= b) {
		if (tab[sr] == c) {
			cout << "Liczba " << c << " wystepuje w zbiorze w komorce o indeksie " << sr << endl;
		}
		if (tab[sr] > c) {
			b = sr - 1;
		}
		else {
			a = sr + 1;
		}
		sr = (a + b) / 2;
	}

}