#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<iomanip.h>
#include<windows.h>

//function
lala(){
 cout<<" **=**=**=**=**=**=**=**=**=**=**=**=**=**=**="<<endl;
 cout<<" *=*         PROGRAM TIKET KONSER              *=*"<<endl;
 cout<<"  *=*                   PANWINK               *=*"<<endl;
 cout<<" *=*                                           *=*"<<endl;
 cout<<" **=**=**=**=**=**=**=**=**=**=**=**=**=**=**="<<endl;
}

jihoon(){
 cout<<endl;
 cout<<"=============================================="<<endl;
}

main(){
 //deklarasi
 char dan,nama[20];
 int a,b,c;
 struct {

  char jenis[20];
  char np[20];
  char kode[20];
  char jt[5];
  char kt[20];
  int kembali;
  char kelas[5];
  int harga;
  long jumbel;
  long sub;
  long total;
  long ubay;
  long ukem;
  long pot;
 }
 pp[10];
 awal:

 //input
 clrscr();
 cout<<"----------------------------------------"<<endl;
 cout<<"|   kode    | kelas | jenis |   harga  |"<<endl;
 cout<<"----------------------------------------"<<endl;
 cout<<"|   BTS     |  1    |   A   |4500000|"<<endl;
 cout<<"|   BTS     |  2    |   D   |3500000|"<<endl;
 cout<<"|   BTS     |  3    |   V   |2000000|"<<endl;
 cout<<"----------------------------------------"<<endl;
 cout<<"| WANNAONE  |  1    |   A   |4000000|"<<endl;
 cout<<"| WANNAONE  |  2    |   V   |2500000|"<<endl;
 cout<<"| WANNAONE  |  3    |   D   |1400000|"<<endl;
 cout<<"----------------------------------------"<<endl;
 cout<<"|   EXO     |  1    |   A   |4200000|"<<endl;
 cout<<"|   EXO     |  2    |   V   |3500000|"<<endl;
 cout<<"|   EXO     |  3    |   D   |2000000|"<<endl;
 cout<<"----------------------------------------"<<endl;
 cout<<" Mau Input Berapa Data ? ";
 cin>>b;
 cout<<" nama kasir                          : ";gets(nama);
 for(a=1;a<=b;a++){
  cout<<" Data Ke- "<<a<<endl;
  cout<<" nama pembeli                        : ";gets(pp[a].np);
  cout<<" kode tiket konser[BTS/WANNAONE/EXO] : ";gets(pp[a].kode);
  cout<<" kelas tiket[1/2/3]           : ";gets(pp[a].kelas);
  cout<<" jenis tiket[A/D/V]                  : ";gets(pp[a].jenis);
 }

 //proses
 a=1;
for(a=1;a<=b;a++){
cout<<"perulangan proses"<<endl;
	if ((pp[a].kode=="BTS") || (pp[a].kode,"bts")){
      cout<<"masuk BTS"<<endl;
      cout<<"Kelas "<<pp[a].kelas<<endl;
		if(pp[a].kelas=="1"){
            cout<<"masuk BTS Kelas 1"<<endl;
   		if((pp[a].jenis =="A") || (pp[a].jenis=="a")){
         	cout<<"masuk BTS Kelas 1 jenis a"<<endl;
            c=4500000;
            pp[a].harga=c;
            cout<<"pp[a].harga  "<<pp[a].harga<<endl;
   		}
      }else if(pp[a].kelas=="2"){
			if((pp[a].jenis=="V") || (pp[a].jenis=="v")){
         	pp[a].harga=3500000;
         }
      }else if(pp[a].kelas=="3"){
			if((pp[a].jenis=="D") || (pp[a].jenis=="d")){
         	pp[a].harga=20000000;
         }
      }
   }else if((pp[a].kode=="WANNAONE") || (pp[a].kode,"wannaone")){
		if(pp[a].kelas=="1"){
			if((pp[a].jenis=="A") || (pp[a].jenis=="a")){
         	pp[a].harga=4000000;
         }
      }else if(pp[a].kelas=="2"){
      	if((pp[a].jenis=="V") || (pp[a].jenis=="v")){
         	pp[a].harga=2500000;
         }
      }else if(pp[a].kelas=="3"){
      	if((pp[a].jenis=="D") || (pp[a].jenis=="d")){
         	pp[a].harga=14000000;
         }
      }
   }else if ((pp[a].kode=="EXO") || (pp[a].kode,"EXO")){
   	if (pp[a].kelas=="1"){
	      if((pp[a].jenis=="A") || (pp[a].jenis=="a")){
         	pp[a].harga=4200000;
         }
      }else if(pp[a].kelas=="2"){
  			if((pp[a].jenis=="V") || (pp[a].jenis=="v")){
   			pp[a].harga=3500000;
         }
   	}else if(pp[a].kelas=="3")
  			if((pp[a].jenis=="D") || (pp[a].jenis=="d")){
   			pp[a].harga=20000000;
         }
   	}
}


 //penghapus layar
 //clrscr();

 //output
 lala();
  cout<<" nama kasir                            = "<<nama<<endl;
 for(a=1;a<=b;a++){
 cout<<" nama pembeli                          = "<<pp[a].np<<endl;
 cout<<" kode tiket konser[BTS/WANNAONE/EXO]   = "<<pp[a].kode<<endl;
 cout<<" kelas tiket                           = "<<pp[a].kelas<<endl;
 cout<<" jenis tiket                           = "<<pp[a].jenis<<endl;
 cout<<" harga tiket                           = "<<pp[a].harga<<endl;
 cout<<"======================================================="<<endl;

 cout<<" Subtotal      :"<<pp[a].sub<<endl;
 pp[a].sub=pp[a].harga*pp[a].harga;
 }
 jihoon();

 cout<<" Mau Input Data Lagi? ";cin>>dan;
 if(dan=='Y' || dan=='y')
 goto awal;

 getch();
}