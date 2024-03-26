#include <iostream>
using namespace std;

int luas;

void prosedurLuas(int p, int l) {
	luas = p * l;
}

int fungsiluas(int p, int l) {
	return p * l;
}


int main()
{
	int panjang, lebar;
	cout << "masukkan panjang: ";
	cin >> panjang;
	cout << "masukkan lebar: ";
	cin >> lebar;

	prosedurLuas(panjang, lebar);
	cout << "Luas persegi panjang dengan prosedur :" << luas << endl;

	cout << "luas persegi panjang dengan fungsi : " << fungsiluas(panjang, lebar) << endl;
	return 0;

