#include <iostream>
#include <string>
using namespace std;

class penerbit {
public:
	static int pengarang;
	int DaftarPenerbit;
	int DaftarBuku;
	int DaftarBukuDikarang;
	string nama;

	void setDaftarPenerbit();
	void printAll();
	penerbit(string pNama) :nama(pNama) { setDaftarPenerbit(); }

	void setDaftarBuku();
	penerbit(string pNama) :nama(pNama) { setDaftarBuku(); }

	void setDaftarBukuDikarang();
	penerbit(string pNama) :nama(pNama) { setDaftarBukuDikarang(); }
};

int penerbit::pengarang = 0;


void penerbit::setDaftarPenerbit() {
	DaftarPenerbit = ++pengarang;
}

void penerbit::setDaftarBuku() {
	DaftarBuku = ++pengarang;
}

void penerbit::setDaftarBukuDikarang() {
	DaftarBukuDikarang = ++pengarang;
}

void penerbit::printAll() {
	cout << " DaftarPenerbit Giga 1 = " << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
	cout << " DaftarBuku Joko = " << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
	cout << " DaftarBukuDikarang  = " << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	penerbit pnb1("Joko");
	penerbit pnb2("Lia");
	penerbit pnb3("Asroni");
	penerbit pnb4("Giga");

	pnb1.printAll();
	pnb2.printAll();
	pnb3.printAll();
	pnb4.printAll();
	return 0;
}