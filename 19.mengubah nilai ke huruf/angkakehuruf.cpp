#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void satuan (int a)
{
if (a==1) {cout<<" Satu ";}
else if (a==2) {cout<<" Dua ";}
else if (a==3) {cout<<" Tiga ";}
else if (a==4) {cout<<" Empat ";}
else if (a==5) {cout<<" Lima ";}
else if (a==6) {cout<<" Enam ";}
else if (a==7) {cout<<" Tujuh ";}
else if (a==8) {cout<<" Delapan ";}
else if (a==9) {cout<<" Sembilan ";}
else if (a==10) {cout<<" Sepuluh ";}
else if (a==11) {cout<<" Sebelas ";}
}
void terbilang (long long b)

{if (b<=11) {satuan(b);} else if ((b>11) && (b<=19))
{terbilang(b%10); cout<<"Belas ";}   else if ((b>=20)&&(b<=99))
{terbilang(b/10); cout<<"Puluh "; terbilang(b%10);} else if ((b>=100)&&(b<=199))
{cout<<"Seratus "; terbilang(b%100);} else if ((b>=200)&&(b<=999))
{terbilang(b/100); cout<<"Ratus "; terbilang(b%100);}   else if ((b>=1000)&&(b<=1999))
{cout<<"Seribu "; terbilang(b%1000);} else if ((b>=2000)&&(b<=9999))
{terbilang(b/1000); cout<<"Ribu "; terbilang(b%1000);} else if ((b>=10000)&&(b<=99999))
{terbilang(b/1000); cout<<"Ribu "; terbilang(b%1000);} else if ((b>=100000)&&(b<=999999))
{ terbilang(b/1000); cout<<"Ribu "; terbilang(b%1000);} else if ((b>=1000000)&&(b<=999999999))
{ terbilang (b/1000000); cout<<"Juta "; terbilang (b%1000000);} else if ((b>=1000000000)&&(b<=999999999999))
{ terbilang (b/1000000000); cout<<"Milyar "; terbilang (b%1000000000);} else if ((b>=1000000000000))
cout<<"Maaf ! Angka Yang Anda Masukan Salah!\n\n";
}

int main()
{
long double nilai;
cout<<"\t\t\t=====PROGRAM KONVERSI ANGKA KE HURUF=====\n";
cout<<"\n\n Input Angka: ";cin>>nilai;
cout<<"\n\n Hasil Konversi Bilangan: ";
terbilang(nilai);
}
