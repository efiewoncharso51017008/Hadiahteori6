#include <iostream.h>
#include <conio.h>
int main ()
{
char nm[20], kode;
int pil, harga, jumbelanja,discount, totalbelanja, totalbayar, bayar, kembalian;
cout <<"Masukan nama anda : "; cin>>nm;
cout<<endl;
cout<<"Selamat Datang "<<nm<<" Di Toko PLAZA INDAH";
cout<<endl;
cout<<"Nama Barang Perabot rumah tangga : \n" ;
cout<<"A. Kursi \n";
cout<<"B. Meja \n";
cout<<"C. Lemari \n";
cout<<"Pilihan barang yang anda ingin beli (A-C) : "; cin>>kode;
cout<<"Masukan jumlah barang yang ingin di beli : ";cin>>jumbelanja;
switch(kode)
{
case 'A' :
harga=1000000;
cout<<"Harga satuan: Rp. "<<harga<<endl;
break;
case 'B' :
harga=2000000;
cout<<"Harga satuan: Rp. "<<harga<<endl;
break;
case 'C' :
harga=2500000;
cout<<"Harga satuan: Rp. "<<harga<<endl;
break;
}
totalbelanja=jumbelanja*harga;
cout<<"kode barang yang di cari "<<kode<<endl;
cout<<"Total pembelanjaan adalah : Rp. "<<totalbelanja<<endl;
if (totalbelanja>=10000000)
{discount = totalbelanja * 20/100;}
else
{discount = 0;}
cout<<"Total yang harus di bayar: Rp. "<<totalbayar<<endl;
cout<<"masukkan uang pembayaran: "; cin>>bayar;
kembalian = totalbayar - bayar;
cout<<"kembalian: Rp. "<<kembalian<<endl;
cout<<"Terimakasih telah membeli di toko kami"<<endl;

getch();}
