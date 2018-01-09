#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <string.h>
#include <iomanip.h>
#include <windows.h>

lala(){
 cout<<" **=**=**=**=**=**=**=**=**=**=**=**=**=**=**"<<endl;
 cout<<" *=*         		LATIHAN C++            *=*"<<endl;
 cout<<"  *=* Program perhitungan Nilai Mahasiswa*=*" <<endl;
 cout<<" *=*                                      *=*"<<endl;
 cout<<" **=**=**=**=**=**=**=**=**=**=**=**=**=**=**"<<endl;
}

jihoon(){
 cout<<endl;
 cout<<"=============================================="<<endl;
}

main(){
 //deklarasi
 int a,b;
 char dan[2];

 struct {
	int uas,uts;
	float akhir;
	char nm[5];
	char nim[90];
	char ket[10];
 }
 pp[10];

 //input
 clrscr();
 lala();

 cout<<" Masukan jumlah data ? ";
 cin>>b;
 for(a=1;a<=b;a++){
 cout<<" Data Ke- 		  :	"<<a<<endl;
 cout<<" NIM			  : ";gets(pp[a].nim);
 cout<<" Nama			  : ";gets(pp[a].nm);
 cout<<" UTS			  : "; cin>>pp[a].uts;
 cout<<" UAS			  : "; cin>>pp[a].uas;
 }

 //proses
 a=1;
for(a=1;a<=b;a++){
	pp[a].akhir = (pp[a].uts + pp[a].uas)/2;
   if(pp[a].akhir>70){
      strcpy(pp[a].ket,"LULUS");
   }else{
      strcpy(pp[a].ket,"GAGAL");
   }
}
 //penghapus layar
 clrscr();

 //output
 lala();
 jihoon();
  //     12345678901234567890123456789012345678901234567
  cout<<"    NIM     NAMA	UTS      UAS	Akhir	Ket     "<<endl;

 for(a=1;a<=b;a++){
 cout<<setw(7)<<pp[a].nim;
 cout<<setw(10)<<pp[a].nm;
 cout<<setw(9)<<pp[a].uts;
 cout<<setw(9)<<pp[a].uas;
 cout<<setw(9)<<pp[a].akhir;
 cout<<setw(9)<<pp[a].ket<<endl;
 }
 getch();
}