#include<iostream>
#include<conio.h>
#include<math.h>
#include<cstdlib>
#include<math.h>

using namespace std;

int main(int argc,char**argv){
	float x,y,hasil,pilih;

	system("cls");
	cout<<"======================"<<endl;
	cout<<"KALKULATOR SEDERHANA"<<endl;
	cout<<"+++++++++++++++++++++"<<endl;

	kalkulator:
		//operasi perhitungan
		cout<<"operasi perhitungan:"<<endl;
		string jumlah ="(1)penjumlahan";
		cout<<jumlah<<endl;

		string pengurangan="(2)pengurangan";
		cout<<pengurangan<<endl;

		string perkalian="(3)perkalian";
		cout<<perkalian<<endl;

		string pembagian="(4)pembagian";
		cout<<pembagian<<endl;

		//mulai menghitung

		cout<<"Masukan Angka pertama=";
		cin>>x;
		cout<<"Masukan Angka kedua=";
		cin>>y;

		int z;
		cout<<"pilih operator perhitungan=";
		cin>>z;

		if(z==1)
		{
			hasil=x+y;
			cout<<"Hasil Penjumlahan="<<hasil<<endl;

		}
		else if(z==2)
		{
			hasil=x-y;
			cout<<"hasil pengurangan="<<hasil<<endl;
		}
		else if(z==3)
		{
			hasil=x*y;
			cout<<" hasil perkalian="<<hasil<<endl;
		}
		else if(z==4)
		{
			hasil=x/y;
			cout<<"hasil dari pembagian="<<hasil<<endl;
		}
		cout<<"================================"<<endl;
		cout<<"pengen coba lagi[1]"<<endl;
		cout<<"Keluar[2]"<<endl;
		cout<<"================================"<<endl;

		cout<<"Masukan Pilihan:";cin>>pilih;
		if (pilih==1){
			goto kalkulator;
		}
		if (pilih==2){
			system("cls");


		cout<<"=============================="<<endl;
		cout<<"Terima Kasih Telah Menggunkan Program Ini"<<endl;
		system("pause");
	}
	return 0;
}
