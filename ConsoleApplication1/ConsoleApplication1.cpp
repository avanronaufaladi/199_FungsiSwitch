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

int main()
{
	int pilihan;
	do
	{
		system("CLS");
		cout << "menu kalkulator sederhana " << endl;
		cout << "1. penjumlahan" << endl;
		cout << "2. pengurangan" << endl;
		cout << "3. perkalian " << endl;
		cout << "4. pembagian" << endl;
		cout << "5. keluar" << endl;
		cout << "masukkan pilihan: ";
		cin >> pilihan;

