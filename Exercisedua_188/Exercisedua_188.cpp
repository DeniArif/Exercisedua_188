#include <iostream>
#include <string>
using namespace std;

class penerbit {
public:
	static int Pengarang;
	int Penulis;
	string nama;

	void setPenulis();
	void printAll();
	penerbit(string pNama) :nama(pNama) { setPenulis(); }
};