#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "������� �������� ��� ���������� � = ";
	cin >> a;
	cout << "������� �������� ��� ���������� b = ";
	cin >> b;
	cout << "������� �������� ��� ���������� � = ";
	cin >> c;
	cout << "����� = " << a + b + c <<endl;
	cout << "������������ = " << a * b * c << endl;
	cout << "������� �������������� = " << double(a + b + c) / 3 << endl; // ����� ��� ����� � ��������� ������
}