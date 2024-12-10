#include <iostream>
#include <iomanip>[p'90']
using namespace std;

struct tambahBarang{
	string barang;
	int jumlahBarang;
	
};

int main (){
	int kapasitasGudang = 500;
        tambahBarang barang[kapasitasGudang];
        int indeks = 1;

int pilih;

while (1){
system("cls");
cout<<"----------------------"<<endl;
cout<<"      INVENTORY       "<<endl;
cout<<"----------------------"<<endl;
cout<<"         menu         "<<endl;
cout<<"1. Tambah Barang"<<endl;
cout<<"2. Tampilkan List Barang"<<endl;
cout<<"3. Hapus Barang"<<endl;
cout<<"4. Keluar"<<endl;
cout<<"silahkan pilih opsi [1/4]: ";

cin >> pilih;

if (pilih == 1){
system ("cls");
cout << "Masukan Nama Barang (tanpa spasi) : ";
cin



