#include<iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cout << "menentukan nilai terbesar 4 buah input" << endl;
	cout << "masukkan nilai 1 : "; cin >> a;
	cout << "masukkan nilai 2 : "; cin >> b;
	cout << "masukkan nilai 3 : "; cin >> c;
	cout << "masukkan nilai 4 : "; cin >> d;

	if (a > b && a > c && a > d)
		cout << "nilai terbesar   :" << a << endl;
	else if (b > a && b > c && b > d)
		cout << "nilai terbesar   :" << b << endl;
	else if (c > a && c > b && c > d)
		cout << "nilai terbesar   :" << c << endl;
	else
		cout << "nilai terbesar   :" << d << endl;

	system("pause");

	return 0;

}