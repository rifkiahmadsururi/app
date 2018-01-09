#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>
main()
{
int i,j;
char nama[5][20];
float nilai1[5];
float nilai2[5];
float hasil[5];
clrscr();
cout<<"masukan jumlah siswa = ";cin>>j;
for(i=1;i<=j;i++)
{
cout<<"Data Ke - "<<i<<endl;
cout<<"Nama Siswa : "; gets(nama[i]);
cout<<"Nilai MidTest : "; cin>>nilai1[i];
cout<<"Nilai Final : "; cin>>nilai2[i];
hasil[i] = (nilai1[i] * 0.40)+ (nilai2[i] * 0.60);
cout<<endl;
}
cout<<"------------------------------------------"<<endl;
cout<<"No. Nama 	Nilai    Nilai   Hasil"<<endl;
cout<<"    Siswa	MidTest  Final   Ujian"<<endl;
cout<<"------------------------------------------"<<endl;
for(i=1;i<=j;i++)
{
cout<<setiosflags(ios::left)<<setw(4)<<i;
cout<<setiosflags(ios::left)<<setw(10)<<nama[i];
cout<<setprecision(2)<<"    "<<nilai1[i];
cout<<setprecision(2)<<"      "<<nilai2[i];
cout<<setprecision(2)<<"      "<<hasil[i]<<endl;
}
cout<<"------------------------------------------"<<endl;
getch();
}