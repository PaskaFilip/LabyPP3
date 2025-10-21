#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//zad 1
    /*int a, b;
    cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	if (a == b)
		cout << "Liczby sa rowne" << endl;
	else if (a < b) {
		cout << "Liczba a jest mniejsza od liczby b" << endl;
	}
	else {
		cout << "Liczba a jest wieksza od liczby b" << endl;
	}*/
	//zad 2
	/*int a, b;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	if (a == b)
		cout << "Liczby sa rowne" << endl;
	else {
		if (a < b) {
			cout << "Liczba a jest mniejsza od liczby b" << endl;
		}
		else {
			cout << "Liczba a jest wieksza od liczby b" << endl;
		}
	}*/
	//zad3
	/*float r;
	cout << "Podaj r: ";
	cin >> r;
	if (r >= 0 && r<0.2) {
		cout << "brak korelacji dodatniej" << endl;
	}
	else if (r >= 0.2 && r < 0.3) {
		cout << "slaba korelacja dodatnia" << endl;
	}
	else if (r >= 0.3 && r < 0.5) {
		cout << "umiarkowana korelacja dodatnia" << endl;
	}
	else if (r >= 0.5 && r < 0.7) {
		cout << "silna korelacja dodatnia" << endl;
	}
	else if (r >= 0.7 && r <= 1) {
		cout << "bardzo silna korelacja dodatnia" << endl;
	}*/
	//zad4
	/*float a, b;
	char znak;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj znak dzialania (+, -, *, /): ";
	cin >> znak;
	switch (znak) {
	case '+':
		cout << "Wynik: " << a + b << endl;
		break;
	case '-':
		cout << "Wynik: " << a - b << endl;
		break;
	case '/':
		if (b == 0) {
			cout << "Nie dziel przez zero!" << endl;
			return 0;
		}
		cout << "Wynik: " << a / b << endl;
		break;
	case '*':
		cout << "Wynik: " << a * b << endl;
		break;
	default:
		cout << "Nieprawidlowy znak dzialania" << endl;
		break;
	}*/
	//zad5
	/*int i = 0;
	while (1) {
		cout << i << endl;
		i++;
	}*/
	//zad6
	/*float a, b;
	char znak;
	bool kontynuowac = true;
	char odpowiedz;
	while(kontynuowac == true){
		cout << "Czy chcesz wykonac dzialanie? (t/n): ";
		cin >> odpowiedz;
		if (odpowiedz == 't') {
			cout << "Podaj a: ";
			cin >> a;
			cout << "Podaj b: ";
			cin >> b;
			cout << "Podaj znak dzialania (+, -, *, /): ";
			cin >> znak;
			switch (znak) {
			case '+':
				cout << "Wynik: " << a + b << endl;
				break;
			case '-':
				cout << "Wynik: " << a - b << endl;
				break;
			case '/':
				if (b == 0) {
					cout << "Nie dziel przez zero!" << endl;
					return 0;
				}
				cout << "Wynik: " << a / b << endl;
				break;
			case '*':
				cout << "Wynik: " << a * b << endl;
				break;
			default:
				cout << "Nieprawidlowy znak dzialania" << endl;
				break;
			}
		}
		else {
			kontynuowac = false;
		}
	}*/
	//zad7
	/*int i = 0;
	while (1) {
		if(i<200)
			if (i % 2 != 0) {
				cout << i << endl;
				i++;
			}
			else {
				i++;
			}
		else{
			break;
		}
	}*/
	//zad8
	/*int n;
	cout << "Podaj liczbe naturalna n: ";
	cin >> n;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i != 0)
			continue;
		else {
			cout << "Liczba " << n << " posiada dzielnik "<< i << endl;
			return 0;
		}
	}*/
    return 0;
}