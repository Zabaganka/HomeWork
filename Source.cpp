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

/*#include <iostream>
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
}*/



// ������ �� ������� �������� L. ���� �� ������ ������� �������� P. ������ ������� = ����� �������. 
// ��������� ������ ������� ���� ������ ������, ���� �� �� �쳺 ������� � �����. 
// ���������� ������� ������� ������� � ������, � ������� ������� � ��.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\n������ ������� ������� (� ������): ";
	int l, p, m_sm;
	cin >> l;
	cout << "\n������ ������� ������� (� �����������): ";
	cin >> p;
	m_sm = l * 100;
	int num = 0;
	while (m_sm >= p)
	{
		m_sm -= p;
		num++;
	}
	cout << "\n�� ��������� " << l << " ����� ������� ����� ������� " << num << " �������/�������\n";
}*/



//�� ����� N �����. ��������� �������� �����. ������ �� ���� ��'�������� � 
// ��������� 60 �����. ��������� ������ ����� ��'����� �� ������.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\n������ ������� ����� � ��������: ";
	int n;
	cin >> n;
	const int cap = 60;
	int num = 0;
	while (n > 0)
	{
		num++;
		n -= cap;
	}
	cout << "������� " << num << " �����.";
};*/



// ���������� ������� ����� ����� �� ����. ��������� ������� �� ���� ����� ��������� � ����.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������ ����� (>0): ";
	int num;
	cin >> num;
	if (num < 0)
	{
		cout << "\n����� �� ��������!";
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



// � ������ ���� ������ ������� 15 ��. ����� ��������� ���� �� ��������� �� 2 �� ���.
//��������� ��� �������� ������� �������� ������ �� n ���.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������ ������� ���: ";
	int day;
	cin >> day;
	int num = 0;
	int sum = 0;
	for (int sm = 15; num < day; sm += 2)
	{
		sum += sm;
		num++;
	}
	cout << "������ �� " << day << " ������� " << sum << " ����������.";
}*/



//���������� ������� � ��������� �����, ��������� �������� ���� ���� ���� �� �����.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������ �����: ";
	int num;
	cin >> num;
	int sum = 0;
	for (int i = num; i > 0; i /= 10)
	{
		num = i % 10;
		sum += num;
	}
	cout << "���� ��� ���� = " << sum;
}*/


//��� ��������� ������ ������� ������ ������ 9 ����. ���� � ��������� ������ �����,
// �� ������ �������� "����", ����  ������, �� ������ ������ � ��������� �������, 
// ������ - � ���������. �������� ������ 9 ���� �����, 1 ��� 0 (����/�����) � ����
// ��������� ��������� ����'������ �������� ��������.

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
		cout << "������ ����� 1(����), ��� 0(�����): ";
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
		cout << "\n������� ������ � ��������� �������!";
	}
	else
	{
		cout << "\n������� ������ � ��������� �������!";
	}
}*/



//������� �� ������� �������� �� ������� ����� � ����������� 
// ����������� ������ ��� ����� ��� ������� �����.

/*#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������� ����� (����� 1-12): ";
	int mounth;
	cin >> mounth;
	cout << "������ � ����� ��� ����� �������������� ����� (1-7): ";
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



//�������� ��������, ��� ��� ����� � ������� �� A
//�� B ��������� ������� ���� �������.���������,
//A = 10, B = 15.


//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "������ ����� � �� ����� � ����� �����: ";
//	int a,b;
//	cin >> a >> b;
//	for (int i = 0; a <= b; a++)
//	{
//		cout << "\nĳ������ ����� " << a << " - ";
//		for (int dil = 1; dil <= a; dil++)
//		{
//			if (a % dil == 0)
//				cout << " " << dil;
//		}
//		cout << ";\n";
//	}
//}


//�������� ��������, ��� �������� �� ����� ����� ����� � ������� �� 2 �� 1000.

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "����� �����: ";
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


//�������� ��������, ��� �������� �� ����� ������� � "*".

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "������ ������� �����: ";
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



//�� ���� ����� ���������� ���. ³� ���������� � ����, �� �� ������������.�������� ��������,
// ��� ������ �� ������ ��� ��������� ����.� ����� ��������, ������ ���� ����������� ���
// �������� ����� � ������ �������, ���� �� ���� ����� ���� ����������� 3 �������.


#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int kil = 0;
	cout << "��� �� ����� ���� ����: ";
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
	cout << "\n� ��������� ������� ��� ���� ��� ������� ��� ����������� " << xv << " ������ � " << zal_sec << " ������.";
}