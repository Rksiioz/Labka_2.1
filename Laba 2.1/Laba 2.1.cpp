// Lab_02.cpp
// < <����� ����� >
// ����������� ������ � 2.
// ˳��� ��������
// ������ 1


#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	double a; //������� ��������
	double z1; //��������� ������� ������
	double z2; //��������� 2�� ������
	const double PI = atan(1) * 4;

	cout << "a ="; cin >> a;

	z1 = (2 * (sin(3 * PI - 2 * a)) * (sin(3 * PI - 2 * a))) * (cos (5 * PI + 2 * a) * cos(5 * PI + 2 * a)) ;
	z2 = 1./4 - (1./4*(sin((5. / 2) * PI - 8 * a)));

    cout << endl;
	cout << "z1 =" << z1 << endl;
	cout << "z2 =" << z2 << endl;


	cin.get();
	return 0;
}

