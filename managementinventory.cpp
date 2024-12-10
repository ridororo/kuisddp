#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
	ofstream addfile;
	addfile.open("databarang.txt", ios::app);
	addfile.close();
	string barang;
	int stok;

	ifstream readfile;
	char read;

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
	if(pilih==1){
			system("cls");
			addfile.open("databarang.txt", ios::app);
			cout<<"Masukan nama barang (tanpa spasi) : ";
			cin.ignore();
			getline(cin,barang);
			cout<<"Masukan Jumlah: ";
			cin>>stok;
			addfile<<setw(50)<<left<<barang<<setw(50)<<left<<stok<<endl;
			addfile.close();
			
			
		}else if(pilih==4){
			system("cls");	
			cout<<"Keluar program...";		
			break;
		}else if(pilih==2){
			system("cls");
			cout<<setw(50)<<left<<"Nama Barang"<<setw(50)<<left<<"Jumlah Barang"<<endl;
			readfile.open("databarang.txt",ios::app);
			while(!readfile.eof()){
				readfile.get(read);
				cout<<read;
			}
			readfile.close();
			cin.ignore();
			cin.get();
		}
	}
  
  return 0;
}
