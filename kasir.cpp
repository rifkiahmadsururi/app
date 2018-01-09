#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	char kd,nm[10];
	int harga,byr,kmb;
 	clrscr();
 	cout<<endl<<" KASIR "<<endl;
   cout<<" Masukan KODE [1/2/3]: ";
   cin>>kd;
	// proses seleksi kondisi

	if(kd == '1'){
   	strcpy(nm,"BUKU");
 		harga=1000;
   }else if(kd=='2'){
   	strcpy(nm,"Pencil");
 		harga=2000;
	}else if(kd=='3'){
   	strcpy(nm,"Tipe X");
 		harga=3000;
	}else{
   	cout<<" salah kode barang" <<endl;
		strcpy(nm,"NULL");
 		harga=0;
   }
	cout<<"Kode Barang = "<<kd<<endl;
   cout<<"Nama Barang = "<<nm<<endl;
	cout<<"Harga Barang = "<<harga<<endl;
   cout<<" Masukan Uang Bayar ";
   cin>>byr;
   while(byr<harga){
		cout<<" Masukan Bayar Kurang "<<endl;
   	cout<<" Masukan Uang Bayar ";
      cin>>byr;
   }
   kmb = byr-harga;
	cout<<"Uang kembali = "<<kmb<<endl;
	getch();
}