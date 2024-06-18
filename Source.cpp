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
// забирають 60 ящиків. Визначити скільки машин під'їхало жо складу.

/*#include <iostream>
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
};*/



// Користувач вводить число більше за нуль. Необхідно вивести всі його цифри починаючи з кінця.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть число (>0): ";
	int num;
	cin >> num;
	if (num < 0)
	{
		cout << "\nЧисло не коректне!";
	}
	else
	{
		for (int i = num; i > 0; i /= 10)
		{
			num = i % 10;
			cout << num;
		}
	}
}*/



// У перший день равлик проповз 15 см. Кожен наступний день він проповзав на 2 см далі.
//Визначити яку загальну відстань проповзе равлик за n днів.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть кількість днів: ";
	int day;
	cin >> day;
	int num = 0;
	int sum = 0;
	for (int sm = 15; num < day; sm += 2)
	{
		sum += sm;
		num++;
	}
	cout << "Равлик за " << day << " проповз " << sum << " сантиметрів.";
}*/



//Користувач вводить з клавіатури число, необхідно показати суму його цифр на екран.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть число: ";
	int num;
	cin >> num;
	int sum = 0;
	for (int i = num; i > 0; i /= 10)
	{
		num = i % 10;
		sum += num;
	}
	cout << "Сума усіх цифр = " << sum;
}*/


//Для прийняття рішення студент підкидає монету 9 разів. Якщо в результаті кількіть монет,
// що випали стороною "орел", буде  парною, він приймає рішення в позитивну сторону, 
// інакше - в негативну. Програма запитує 9 разів число, 1 або 0 (орел/решка) і видає
// відповідний результат розв'язання проблеми студента.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num = 0;
	int answer;
	int orel;
	for (orel = 0; num < 9; num++)
	{
		cout << "Введіть число 1(орел), або 0(решка): ";
		cin >> answer;
		if (answer == 1)
		{
			orel += answer;
		}
		else
		{
			continue;
		}
	}
	if (orel % 2 == 0)
	{
		cout << "\nПриймай рішення в позитивну сторону!";
	}
	else
	{
		cout << "\nПриймай рішення в негативну сторону!";
	}
}*/



//Вивести на дисплей календар на обраний місяць з урахуванням 
// зазначеного номера дня тижня для початку місяця.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Виберіть місяць (число 1-12): ";
	int mounth;
	cin >> mounth;
	cout << "Введіть з якого дня тижня починатиметься місяць (1-7): ";
	int day;
	cin >> day;
	cout << "Mo\tTu\tWe\tTh\tFr\tSa\tSu\n";
	for (int num = 0; num < day-1; num++)
	{
		cout << "_\t";
	}
	if (mounth == 1 || mounth == 3 || mounth == 5 || mounth == 7 || mounth == 8 || mounth == 10 || mounth == 12)
	{
		for (int num = 1; num < 32; num++)
		{
			cout << num << "\t";
		}
	}
	else if (mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11)
	{
		for (int num = 1; num < 31; num++)
		{
			cout << num << "\t";
		}
	}
	else
	{
		for (int num = 1; num < 29; num++)
		{
			cout << num << "\t";
		}
	}
}*/



//Написати програму, яка для чисел у діапазоні від A
//до B визначала кількість їхніх дільників.Наприклад,
//A = 10, B = 15.


//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Введіть число А та число В через пробіл: ";
//	int a,b;
//	cin >> a >> b;
//	for (int i = 0; a <= b; a++)
//	{
//		cout << "\nДільники числа " << a << " - ";
//		for (int dil = 1; dil <= a; dil++)
//		{
//			if (a % dil == 0)
//				cout << " " << dil;
//		}
//		cout << ";\n";
//	}
//}


//Створити програму, яка виводить на екран прості числа в діапазоні від 2 до 1000.

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Прості числа: ";
//	for (int i = 3; i <= 1000; i++)
//	{
//		bool flag = true;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			cout << i << ", ";
//		}
//	}
//}


//Написати програму, яка виводить на екран сніжинку з "*".

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Введіть непарне число: ";
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j||i+j==n-1||j==n/2||i==n/2)
//				cout << "*";
//			else
//			{
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//}



//На валізі стоїть тризначний код. Він складається з цифр, які не повторюються.Напишіть програму,
// яка виведе всі можливі такі комбінації цифр.А також визначте, скільки часу знадобиться для
// відкриття валізи в гіршому випадку, якщо на один такий набір витрачається 3 секунди.


#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int kil = 0;
	cout << "Код від валізи може бути: ";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int l = 0; l < 10; l++)
			{
				if (i != j && j != l && l != i)
				{
					cout << i << j << l << " ";
					kil++;
				}
			}
		}
	}
	int sec = kil * 3;
	int xv = sec / 60;
	int zal_sec = sec % 60;
	cout << "\nУ найгіршому випадку для того аби підібрати код знадобиться " << xv << " хвилин і " << zal_sec << " секунд.";
}