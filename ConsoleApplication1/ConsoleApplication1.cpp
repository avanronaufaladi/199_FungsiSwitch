#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b)
{
	return a + b;
}

int pengurangan(int a, int b)
{
	return a - b;
}

int perkalian(int a, int b)
{
	return a * b;
}

float pembagian(int a, int b)
{
	return a / b;
}

void inputdata()
{
	cout << "\nmasukkan bilangan pertama: ";
	cin >> bilangan1;
	cout << "\nmasukkan bilangan kedua: ";
	cin >> bilangan2;
}
