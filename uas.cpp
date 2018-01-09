#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <string.h>
#include <iomanip.h>
#include <windows.h>

//function              
lala(){
 cout<<" **=**=**=**=**=**=**=**=**=**=**=**=**=**=**="<<endl;
 cout<<" *=*         PROGRAM TIKET KONSER          *=*"<<endl;
 cout<<"  *=*               PANWINK               *=*"<<endl;
 cout<<" *=*                                       *=*"<<endl;
 cout<<" **=**=**=**=**=**=**=**=**=**=**=**=**=**=**="<<endl;
}

jihoon(){
 cout<<endl;
 cout<<"=============================================="<<endl;
}

main(){
 //deklarasi
 char dan,nama[20];
 char z[20];
 int a,b,c,sub;
 long total;
 long ubay;
 long ukem;
 long pot;

 struct {
  char jenis[20];
  char np[20];
  char kode[20];
  char jt[5];
  char kt[20];
  int kembali;
  char kelas[5];
  long harga;
  long jumbel;
 }
 pp[10];
 awal:

 //input
 clrscr();
 lala();
 cout<<"----------------------------------------"<<endl;
 cout<<"|   kode    | kelas |   harga  |"<<endl;
 cout<<"----------------------------------------"<<endl;
 cout<<"|   BTS     |  1    |   4500000|"<<endl;
 cout<<"|   BTS     |  2    |   3500000|"<<endl;
 cout<<"|   BTS     |  3    |   2000000|"<<endl;
 cout<<"----------------------------------------"<<endl;
 cout<<"| WANNAONE  |  1    |   4000000|"<<endl;
 cout<<"| WANNAONE  |  2    |   2500000|"<<endl;
 cout<<"| WANNAONE  |  3    |   1400000|"<<endl;
 cout<<"----------------------------------------"<<endl;
 cout<<"|   EXO     |  1    |   4200000|"<<endl;
 cout<<"|   EXO     |  2    |   3500000|"<<endl;
 cout<<"|   EXO     |  3    |   2000000|"<<endl;
 cout<<"----------------------------------------"<<endl;

 data:
 cout<<" Mau beli berapa tiket (maksimal 10 Tiket)? ";
 cin>>z;

if((strcmp(z,"1")==0)){
   b =1;
 }else if((strcmp(z,"2")==0)){
   b =2;
 }else if((strcmp(z,"3")==0)){
   b =3;
 }else if((strcmp(z,"4")==0)){
   b =4;
 }else if((strcmp(z,"5")==0)){
   b =5;
 }else if((strcmp(z,"6")==0)){
   b =6;
 }else if((strcmp(z,"7")==0)){
   b =7;
 }else if((strcmp(z,"8")==0)){
   b =8;
 }else if((strcmp(z,"9")==0)){
   b =9;
 }else if((strcmp(z,"10")==0)){
   b =10;
 }else{
 cout<<"Inputan harus berupa angka bulat positif";
 goto data;
 }

 //cout<<b;
 cout<<" Nama Kasir				  : ";gets(nama);
 for(a=1;a<=b;a++){
 cout<<" Data Ke- "<<a<<endl;
 cout<<" Nama Pembeli				  : ";gets(pp[a].np);
 kdTiket:
 cout<<" Kode Tiket Konser[BTS/WANNAONE/EXO]	  : ";gets(pp[a].kode);

 if ((strcmp(pp[a].kode,"BTS")==0) || (strcmp(pp[a].kode,"bts")==0) || (strcmp(pp[a].kode,"WANNAONE")==0) || (strcmp(pp[a].kode,"wannaone")==0) || (strcmp(pp[a].kode,"EXO")==0) || (strcmp(pp[a].kode,"exo")==0) ){
 }else{
 cout<<" Kode yang anda masukan salah, Silakhkan mencoba kembali \n";
 goto kdTiket;
 }

 klsTiket:
 cout<<" Kelas Tiket[1/2/3]			  : ";gets(pp[a].kelas);
 if((strcmp(pp[a].kelas,"1")==0) ||(strcmp(pp[a].kelas,"2")==0) ||(strcmp(pp[a].kelas,"3")==0) ){
 }else{
 cout<<" Kelas Tiket yang anda masukan tidak tersedia, Silakhkan mencoba kembali \n";
 goto klsTiket;
 }

 }

 //proses
 a=1;
for(a=1;a<=b;a++){
	if ((strcmp(pp[a].kode,"BTS")==0) || (strcmp(pp[a].kode,"bts")==0)){
      if(strcmp(pp[a].kelas,"1")==0){
            pp[a].harga=450000;

      }else if(strcmp(pp[a].kelas,"2")==0){
         	pp[a].harga=350000;

      }else if(strcmp(pp[a].kelas,"3")==0){
         	pp[a].harga=200000;

      }
   }else if ((strcmp(pp[a].kode,"WANNAONE")==0) || (strcmp(pp[a].kode,"wannaone")==0)){
		if(strcmp(pp[a].kelas,"1")==0){
         	pp[a].harga=400000;

      }else if(strcmp(pp[a].kelas,"2")==0){
         	pp[a].harga=250000;

      }else if(strcmp(pp[a].kelas,"3")==0){
         	pp[a].harga=140000;

      }
   }else if ((strcmp(pp[a].kode,"EXO")==0) || (strcmp(pp[a].kode,"exo")==0)){
		if (strcmp(pp[a].kelas,"1")==0){
				pp[a].harga=420000;

		}else if(strcmp(pp[a].kelas,"2")==0){
				pp[a].harga=350000;

		}else if(strcmp(pp[a].kelas,"3")==0){
				pp[a].harga=200000;

		}
   }

}


 //penghapus layar
 clrscr();

 //output
 lala();
  cout<<" Nama Kasir                            = "<<nama<<endl;
 jihoon();
  //     12345678901234567890123456789012345678901234567
  cout<<"   Nama     Kode    Kelas      Harga     "<<endl;
  cout<<"  Pembeli   Tiket   Tiket      Tiket     "<<endl;

 for(a=1;a<=b;a++){
 cout<<setw(7)<<pp[a].np;
 cout<<setw(10)<<pp[a].kode;
 cout<<setw(9)<<pp[a].kelas;
 cout<<setw(12)<<pp[a].harga<<endl;
 }
 cout<<"========================================================"<<endl;
 sub=0;
 for(a=1;a<=b;a++){
 	sub=pp[a].harga+sub;
 }
 cout<<"Total Harga Tiket  = Rp. "<<sub<<endl;
 	if(b>=2){
   	pot=0.2*sub;
      cout<<"Potongan "<<pot<<endl;
   }else{
   	pot=0;
      cout<<"Potongan "<<pot<<endl;
   }
cout<<"========================================================"<<endl;
total=sub-pot;
cout<<"Harga Setelah discon = Rp. "<<total<<endl;

ubay:
cout<<"Uang Bayar           = Rp. ";cin>>ubay;
if(total>ubay){
cout<<"Uang yang anda masukan kurang \n";
goto ubay;
}
cout<<"========================================================"<<endl;
ukem=ubay-total;
cout<<"Uang Kembali         = Rp. "<<ukem<<endl;
 jihoon();

 cout<<" Mau Input Data Lagi? ( Y / N )";cin>>dan;
 if(dan=='Y' || dan=='y')
 goto awal;
 if(dan=='T' || dan=='t')
 goto selesai;

 selesai:

 getch();
}