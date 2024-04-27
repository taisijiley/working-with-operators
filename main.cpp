#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Введите значение для переменной а = ";
	cin >> a;
	cout << "Введите значение для переменной b = ";
	cin >> b;
	cout << "Введите значение для переменной а = ";
	cin >> c;
	cout << "Сумма = " << a + b + c <<endl;
	cout << "Произведение = " << a * b * c << endl;
	cout << "Среднее арифмитическое = " << double(a + b + c) / 3 << endl; // ответ тут будет с плавающей точкой
}