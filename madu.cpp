#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main(){
	char kd[2],nm[100];
   int hrg_s,tb,jml;

   cout<<"Welcome in my application"<<endl;
	cout<<"==========================="<<endl;
	cout<<"Kode Barang [LH/LR/LK]  : "; cin>>kd;
   if(strcmp(kd, "LH") == 0){
		strcpy(nm,"Madu Lebah Hutan");
      hrg_s = 50000;
   }else if(strcmp(kd, "LR") == 0){
		strcpy(nm,"Madu Lebah Randu");
      hrg_s = 25000;
   }else if(strcmp(kd, "LH") == 0){
		strcpy(nm,"Madu Lebah Kurma");
      hrg_s = 30000;
   }else {
		strcpy(nm,"Data tidak ditemukan");
      hrg_s = 0;
   }
   cout<<"Nama Madu               : "<<nm<<endl;
   cout<<"Harga Satuan            : Rp. "<<hrg_s<<endl;
   cout<<"Banyak pembelian        : "; cin>>jml;
   cout<<"=============================="<<endl;
   tb = jml*hrg_s;
   cout<<"Total bayar             : Rp. "<<tb<<endl;
   cout<<"\nTERIMAKASIH ATAS KUNJUNGAN ANDA";
   getch();
}
