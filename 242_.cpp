#include<iostream>
using namespace std;

struct maskapai{
	string maskapai[]={"burungAir", "singaAir", "superJetAir","indonesiaAir"}
};
struct Rute{
	string bandaraAsal[]={};
	string bandaraTujuan[]={};
	int banyakrute;
	string harga[]={};
	(bandaraAsal=banyak rute*500000);
	(bandaraAsal==bandaraTujuan);
};

void BacaData(){
	istream file ("dataPenerbangan.txt");
	file close();
}
int main(){
	int kode;
	string maskapai;
	string bandaraAsal;
	string bandaraTujuan;
	string namaPenumpang;
	int jadwal;
	int penerbangan;
	int pilihan;
	cout<<"======PEMESANAN TIKET PESAWAT===== \n";
	cout<<"1.Lihat Jadwal Penerbangan.\n";
	cout<<"2.Pemesanan tiket.\n";
	cin>>pilihan;
	switch(pilihan){
		case 1: {
			cout<<"Lihat jadwal penerbangan\n";
			cout<<"Masukkan bandara awal\n"; cin>>bandaraAsal;
			cout<<"Masukkan bandara awal\n"; cin>>bandaraTujuan;
			cout<<"Masukkan banyak rute yang ditempuh\n";
			cout<<bandaraAsal.Rute;
			cout<<"Masukkan Maskapai\n"; cin>>maskapai;
			//if(bandaraAsal == Rute)
			break;
		}
		case 2:{
			cout<<"Pemesanan tiket";
			cout<<"Lihat jadwal penerbangan\n";
			cout<<"Masukkan bandara awal\n"; cin>>bandaraAsal;
			cout<<"Masukkan bandara awal\n"; cin>>bandaraTujuan;
			cout<<"Masukkan banyak rute yang ditempuh\n";
			cout<<bandaraAsal.Rute;
			cout<<"Masukkan Maskapai\n"; cin>>maskapai;
			cout<<"pesan tiket:\n";
			break;
		}
	}
	
}

