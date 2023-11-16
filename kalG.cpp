#include <iostream>

using namespace std;

int main()
{ 
 // Deklarasi variabel
 int Buku, Kamus,Pensil;
 float Book, Stat, Disc, FixBook, FixStat;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t=== Daftar barang beserta harganya ==="<<endl;
 cout<<"\t\t| Buku PWPB        : Rp 105.000,00 |"<<endl;
 cout<<"\t\t| Buku PBO         : Rp 188.000,00 |"<<endl;
 cout<<"\t\t| Kamus Bahasa     : Rp  55.000,00 |"<<endl;
 cout<<"\t\t| Pensil           : Rp  10.000,00 |"<<endl;
 cout<<"\t\t| Buku Apalah      : Rp  35.000,00 |"<<endl;
 cout<<"\t\t======================================\n"<<endl;
 
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah Buku PWPB yang dibeli        : "; cin>>Buku;
 cout<<"Masukkan jumlah Buku PBO yang dibeli         : "; cin>>Buku;
 cout<<"Masukkan jumlah Kamus Bahasa yang dibeli     : "; cin>>Kamus;
 cout<<"Masukkan jumlah Pensil yang dibeli           : "; cin>>Pensil;
 cout<<"Masukkan jumlah Buku Apalah yang dibeli      : "; cin>>Buku;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<Buku<<"\t\tC Buku PWPB 	 \t105000 \t\t"<<Buku*105000<<"\t    |"<<endl;
 cout<<"\t|   "<<Buku<<"\t\tC Buku PBO \t\t188000 \t\t"<<Buku*188000<<"\t    |"<<endl;
 cout<<"\t|   "<<Kamus<<"\t\tKamus Bahasa \t\t55000 \t\t"<<Kamus*55000<<"\t    |"<<endl;
 cout<<"\t|   "<<Pensil<<"\t\tPensil		 \t10000 \t\t"<<Pensil*10000<<"\t    |"<<endl;
 cout<<"\t|   "<<Buku<<"\t\tBuku Apalah \t\t35000 \t\t"<<Buku*35000<<"\t    |"<<endl;
 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 Book = Buku*105000+Buku*188000;
 Disc = 6.25/100*Book;
 Stat = Kamus*55000+Pensil*10000+Buku*35000;
 cout<<"\t|\t\t\tHarga Total Buku \t: "<<Book<<"\t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Book-Disc<<"\t    |"<<endl;
 FixBook = Book-Disc;
 Disc = 3.00/100*Stat;
 cout<<"\t|\t\t\tHarga Total Stationary \t: "<<Stat<<"  \t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Stat-Disc<<"   \t    |"<<endl;
 FixStat = Stat-Disc;
 cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<FixBook+FixStat<<"\t    |"<<endl;
 cout<<"\t====================================================================="<<endl;
}
