#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
	ofstream addfile;
	ifstream readfile;
	char read;
	
	addfile.open("databarang.txt", ios::app);
	addfile.close();
	
	string barang;
	int stok;
	int indeks=1;
	
	
	int pilih;
	
	while (1){
	
		system("cls");
		cout<<"----------------------"<<endl;
		cout<<"      INVENTORY       "<<endl;
		cout<<"----------------------"<<endl;
		cout<<"1. Tambah Barang"<<endl;
		cout<<"2. Tampilkan List Barang"<<endl;
		cout<<"3. Hapus Barang"<<endl;
		cout<<"4. Keluar"<<endl;
		cout<<"silahkan pilih opsi [1/4]: ";

		
		cin>>pilih;
  }

  return 0;
}

