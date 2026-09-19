// Lab_02.cpp
// < Тарасова Анна >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 27.2

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // число пі
	double alpha; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	
	cout << "alpha = "; cin >> alpha;
	
	z1 = pow(cos(3.0 * Pi / 8.0 - alpha / 4.0), 2) - pow(cos(11.0 * Pi / 8.0 + alpha / 4.0), 2);
	z2 = (sqrt(2.0) / 2.0) * sin(alpha / 2.0);
	
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	
	cin.get();
	return 0;
}