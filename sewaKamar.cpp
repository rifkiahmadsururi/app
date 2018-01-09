#include <stdio>
#include <conio.h>
#include <iostream.h>
#include <windows.h>

main(){

   char nm[20],kd[20],yt[20];
	int lm,h,ub;
	ulang :

   clrscr();
   cout<<"Nama Penyewa			: "; cin>>nm;
   cout<<"Kode Kamar [A/B/M]		: "; cin>>kd;
   if(strcmp(kd,"A")== 0 || strcmp(kd,"a")== 0){
		   strcpy(nm,"/nAnggrek");
         h=300000;
   }else if(strcmp(kd,"B")== 0 || strcmp(kd,"b")== 0){
		   strcpy(nm,"/nBougenville");
         h=250000;
   }else if(strcmp(kd,"M")== 0 || strcmp(kd,"m")== 0){
		   strcpy(nm,"/nMawar");
         h=200000;
	}else{
   	cout<<"Kode Kamar yanng anda masukan salah, Ingin input lagi [Y/T]";
      cin>>yt;
      if(strcmp(yt,"Y")== 0 || strcmp(yt,"y")== 0){
			goto ulang;
      }else {
			exit(0);
      }
   }
	cout<<"Lama menginap			: "; cin>>lm;
   cout<<"***********************************\n";

	cout<<"\nLama Menginap			: "<<lm<<"  Hari";
   if(lm >= 7){
   	cout<<"\nSouvenir			: Payung Cantik";
   }else{
		cout<<"\nSouvenir			: ";
   }
   cout<<"\nBiaya Sewa			: "<<lm*h;
   cout<<"\nBiaya Administrasi		: "<<200000;
   cout<<"\nTotal biaya sewa		: "<<(lm*h)+200000;
   cout<<"\n***********************************\n";
   ub:
   cout<<"Uang Bayar			: ";cin>>ub;
   if(ub < (lm*h)+200000 ){
   	cout<<"uang tidak cukup\n";
      goto ub;
   }
   cout<<"Uang Kembali			: "<<ub-(lm*h)-200000;

   cout<<"\n***********************************\n";
   cout<<"Ingin input lagi [Y/T]";
   cin>>yt;
   if(strcmp(yt,"Y")== 0 || strcmp(yt,"y")== 0){
		goto ulang;
   }else {
		exit(0);
   }
   getch();
}