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

