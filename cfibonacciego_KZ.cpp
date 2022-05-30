#include <iostream>
using namespace std;

void Funkcja(int a);
int main()
{
	int a;
	cout << "Ile wyrazow ciagu oczekujesz? ";
	cin >> a;
	Funkcja(a);
}

void Funkcja(int a) {	
	int f;
	int f0 = 0;
	int f1 = 1;
  
	for (int i = 0; i < a; i++) {
		if (i > 1) {
			f = f0 + f1;
				f0 = f1;
			f1 = f;
		}
		else {
			f = i;
		}
		cout << f << endl;
	}
}