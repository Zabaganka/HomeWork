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

/*#include <iostream>
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
}*/



// Швачка має тканину довжиною L. Вона має пошити подушки довжиною P. Ширина тканини = ширині подушки. 
// Визначити скільки подушок може пошити швачка, якщо та не вміє множити і ділити. 
// Користувач вводить довжину тканини в метрах, а довжину подушки в см.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\nВведіть довжину тканини (в метрах): ";
	int l, p, m_sm;
	cin >> l;
	cout << "\nВведіть довжину подушки (в сантиметрах): ";
	cin >> p;
	m_sm = l * 100;
	int num = 0;
	while (m_sm >= p)
	{
		m_sm -= p;
		num++;
	}
	cout << "\nЗа допомогою " << l << " метрів тканини можна зробити " << num << " подушки/подушок\n";
}*/



//На складі N ящиків. Необхідно звільнити склад. Машини по черзі під'їжджають і 
// забирають певну кількість ящиків. Визначити скільки машин під'їхало жо складу.

#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\nВведіть кількість ящиків з яблуками: ";
	int n;
	cin >> n;
	const int cap = 60;
	int num = 0;
	while (n > 0)
	{
		num++;
		n -= cap;
	}
	cout << "Потрібно " << num << " машин.";
}