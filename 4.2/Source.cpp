// Lab_03_4.cpp
// < Шкринда Володимир
// Лабораторна робота № 4.2
// Табуляція функції, заданої
// Варіант 22
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = fabs(x * x * x);
		if (x < -1)
			B = fabs(2 + x) + sqrt(sin(x));
		else
			if (-1 <= x && x <= 1)
				B = atan((x * x * x) + 1) + 1;
			else
				B = exp(cos(x)) + log10(1 / x + 1);

		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	x = xp;
	do {
		A = fabs(x * x * x);
		if (x < -1)
			B = fabs(2 + x) + sqrt(sin(x));
		else
			if (-1 <= x && x <= 1)
				B = atan((x * x * x) + 1) + 1;
			else
				B = exp(cos(x)) + log10(1 / x + 1);

		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	} while (x <= xk);
	cout << "---------------------------" << endl;
	for (x = xp; x <= xk; x += dx)
	{
		A = fabs(x * x * x);
		if (x < -1)
			B = fabs(2 + x) + sqrt(sin(x));
		else
			if (-1 <= x && x <= 1)
				B = atan((x * x * x) + 1) + 1;
			else
				B = exp(cos(x)) + log10(1 / x + 1);

		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
	}
	return 0;
	cin.get();
}
