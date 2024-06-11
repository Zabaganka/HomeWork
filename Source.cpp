//Програма яка виводить на екран горизонтальну лінію із символів. Кількість символів, який 
// використовуватиметься символ, і яка буде лінія - горизонтальна чи вертикальна - обирає користувач. 


/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int kil, nap;
	char sym;
	cout << "\nВведіть потрібний символ один раз: ";
	cin >> sym;
	cout << "\nВведіть бажану кількість символів: ";
	cin >> kil;
	cout << "\nНатисніть 1, якщо бажаєте аби лінія була горизонтальна. \n"
		"Натисніть 2, якщо бажаєте, щоб лінія була вертикальною.\n";
	cin >> nap;
	int i = 0;
	switch (nap)
	{
	default:
		cout << "Некоректний ввід.";
		break;
	case 1:
		do
		{
			i++;
			cout << sym;
		} while (i < kil);
		break;
	case 2:
		do {
			i++;
			cout << sym << endl;
		} while (i < kil);
		break;
	}
}*/


//Програма яка знаходить суму всіх цілих не парних чисел у діапазоні, зазначеному користувачем.

#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c;
	cout << "Введіть два бажані числа через пробіл: ";
	cin >> a >> b;
	if (a%2!=0)
	{
		c = a;
		do {
				cout << c << endl;
				c = c + 2;
			} while (c <= b);
	}
	else
	{
		c = a + 1;
		do {
			cout << c << endl;
			c = c + 2;
		} while (c <= b);
	}
}