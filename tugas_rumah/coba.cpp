#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int pilihan=0, um, uk;
	float saldo=100000;
	cout<<"BANK INDONESIA JAYA"<<endl;
	cout<<"___________________"<<endl;
	do{
		cout<<"	Saldo : "<<saldo<<endl;
		cout<<"Menu Transaksi :"<<endl;
		cout<<"1. Setor Tabungan"<<endl;
		cout<<"2. Ambil Tabungan"<<endl;
		cout<<"3. Keluar"<<endl;
		cout<<"Pilihan Anda (1/2/3)"<<endl;
		cin>>pilihan;
		
		if(pilihan==1){
			cout<<"=SETOR TUNAI="<<endl;
			cout<<"Masukan Uang Setor : "<<endl;
			cin>>um;
			saldo=saldo + um ;
			cout<<"Total Saldo Anda : "<<saldo<<endl;
			cout<<"Tekan Enter Untuk Kembali Ke Menu Utama"<<endl;
			
		}else if (pilihan==2){
			cout<<"=TARIK TUNAI="<<endl;
			cout<<"Tarik Uang Setor : "<<endl;
			cin>>uk;
			
			if (saldo > 50000){
                saldo = saldo - uk;
				cout<<"Sisa Saldo Anda : "<<saldo<<endl;
				cout<<"Tekan Enter Untuk Kembali Ke Menu Utama"<<endl;
			}
			else if (saldo - uk <= 50000){
                
				cout<<"Saldo Anda Tidak Mencukupi"<<endl;
			}
		}else if (pilihan==3){
			system("keluar");
		}
	}while(pilihan!=3);
}