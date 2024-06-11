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

/* <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, i;
	int c = 0;
	cout << "Введіть два бажані числа через пробіл: ";
	cin >> a >> b;
	if (a % 2 != 0)
	{
		i = a;
		do {
			c += i;
			i = i + 2;
		} while (i <= b);
	}
	else
	{
		i = a + 1;
		do {
			c += i;
			i = i + 2;
		} while (i <= b);
	}
	cout << "Сума усіх непарних чисел = " << c;
}*/



//Дано натуральне число n. Програма обчислює факторіал невід'ємних цілих чисел n.\

#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть число n: ";
	int n;
	cin >> n;
	int i = 1;
	int fak = 1;
	if (n > 0)
	{
		while (i <= n)
		{
			fak *= i; 
			i++;
		}
		cout << "Факторіал числа " << n << " = " << fak;
	}
	else if (n==0)
	{
		cout << "Факторіал " << n << " = 1";
	}
	else
	{
		cout << "Error! Incorrect number!";
	}
}

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

}*/
