#include<conio.h>
#include<stdio.h>
#include<iostream.h>
char* ukurankebab(char koukur)
{
if(koukur=='P')
{return"Personal";}
else
if(koukur=='S')
{return"Sedang";}
else
{return"Besar";}
}
main()
{
class
{
public:
char kokebab [2],*nakebab,koukur,*ukuran;
int harga;
}kebab;
char nama[20],lagi;
float jumbel,subtotal,potongan,tobay,ubay,ukem;
awal:
clrscr();
cout<<"******************************************"<<endl;
cout<<"            TOKO KEBAB RISKY"<<endl;
cout<<"******************************************"<<endl;
cout<<"Nama Pembeli    : ";gets(nama);
cout<<"Nama Kebab"<<endl;
cout<<"[KT] Kebab Turki"<<endl;
cout<<"[KM] Kebab Mesir"<<endl;
cout<<"[KI] Kebab India"<<endl<<endl;
cout<<"Kode Kebab      : ";cin>>kebab.kokebab;
cout<<"Ukuran [P|S|B]  : ";cin>>kebab.koukur;
cout<<"Jumlah Beli     : ";cin>>jumbel;
if(!strcmp(kebab.kokebab,"KT")||!strcmp(kebab.kokebab,"kt"))
{
kebab.nakebab="Kebab Turki";
if(kebab.koukur=='P')
{kebab.harga=30000;}
else
if(kebab.koukur=='S')
{kebab.harga=50000;}
else
{kebab.harga=80000;}
}
else
if(!strcmp(kebab.kokebab,"KM")||!strcmp(kebab.kokebab,"km"))
{
kebab.nakebab="Kebab Mesir";
if(kebab.koukur=='P')
{kebab.harga=40000;}
else
if(kebab.koukur=='S')
{kebab.harga=60000;}
else
{kebab.harga=90000;}
}
else
{
kebab.nakebab="Kebab India";
if(kebab.koukur=='P')
{kebab.harga=50000;}
else
if(kebab.koukur=='S')
{kebab.harga=70000;}
else
{kebab.harga=100000;}
}
subtotal=jumbel*kebab.harga;
if(jumbel>5)
{potongan=0.1*subtotal;}
else
{potongan=0.05*subtotal;}
tobay=subtotal-potongan;
clrscr();
cout<<"******************************************"<<endl;
cout<<"         DETAIL PEMBELIAN KEBAB"<<endl;
cout<<"******************************************"<<endl;
cout<<"Nama Pembeli       : "<<nama<<endl;
cout<<"Nama Kebab         : "<<kebab.nakebab<<endl;
cout<<"Ukuran Kebab       : "<<ukurankebab (kebab.koukur)<<endl;
cout<<"Harga              : Rp. "<<kebab.harga<<endl;
cout<<"Jumlah Beli        : "<<jumbel<<endl;
cout<<"******************************************"<<endl;
cout<<"Subtotal           : Rp. "<<subtotal<<endl;
cout<<"Potongan           : Rp. "<<potongan<<endl;
cout<<"Total Bayar        : Rp. "<<tobay<<endl;
cout<<"******************************************"<<endl;
cout<<"Uang Bayar         : Rp. ";cin>>ubay;
ukem=ubay-tobay;
cout<<"Uang Kembali       : Rp. "<<ukem<<endl;
cout<<"******************************************"<<endl;
cout<<"Input Data Lagi [Y/T]…? ";cin>>lagi;
if(lagi=='Y'||lagi=='y')
{goto awal;}
getch();
}