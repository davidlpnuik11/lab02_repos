// Lab_02.cpp
// <����� ���� ������������ >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 14
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	//double z2; // ��������� ���������� 2-�� ������
	cout << "a = "; cin >> a;
	z1 = (cos(a) + sin(a)) / (cos(a) - sin(a));
	//z2 = 2 * tan(a) + 2 * sin(a);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
