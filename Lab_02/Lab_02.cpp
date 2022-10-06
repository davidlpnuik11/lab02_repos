// Lab_02.cpp
// <Пурвін Давід Вячеславович >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 14
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	//double z2; // результат обчислення 2-го виразу
	cout << "a = "; cin >> a;
	z1 = (cos(a) + sin(a)) / (cos(a) - sin(a));
	//z2 = 2 * tan(a) + 2 * sin(a);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
