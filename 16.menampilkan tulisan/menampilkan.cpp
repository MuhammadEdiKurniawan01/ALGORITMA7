/* Menampilkan Tulisan sejumlah n Oleh M.Edi Kurniawan S. TI7 */
#include<stdio.h>
#include<conio.h>

int ulang (int n);

int main (void)
{
int n;
printf("Masukan Nilai (n) : ");
scanf("%d",&n);
ulang (n);
getch ();
}

int ulang (int n)
{
int i;
for(i=1;i<=n;i++)
printf("Algoritma dan Pemrograman\n");
return (i);
}
