//�������� ��� �������� �� ����� ������������� ��� �� �������. ʳ������ �������, ���� 
// ��������������������� ������, � ��� ���� ��� - ������������� �� ����������� - ����� ����������. 


/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int kil, nap;
	char sym;
	cout << "\n������ �������� ������ ���� ���: ";
	cin >> sym;
	cout << "\n������ ������ ������� �������: ";
	cin >> kil;
	cout << "\n�������� 1, ���� ������ ��� ��� ���� �������������. \n"
		"�������� 2, ���� ������, ��� ��� ���� ������������.\n";
	cin >> nap;
	int i = 0;
	switch (nap)
	{
	default:
		cout << "����������� ���.";
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


//�������� ��� ��������� ���� ��� ����� �� ������ ����� � �������, ����������� ������������.

/* <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, i;
	int c = 0;
	cout << "������ ��� ����� ����� ����� �����: ";
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
	cout << "���� ��� �������� ����� = " << c;
}*/



//���� ���������� ����� n. �������� �������� �������� ����'����� ����� ����� n.\

#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������ ����� n: ";
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
		cout << "�������� ����� " << n << " = " << fak;
	}
	else if (n==0)
	{
		cout << "�������� " << n << " = 1";
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
