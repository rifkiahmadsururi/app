#include<iostream.h>
#include<conio.h>
#include<windows.h> // untuk exit

zuhraida(){
float rupiah, poundsterling, euro, usd;
int pilihan,pilihan1;
menuZuhraida:
clrscr();
cout<<"Anda memilih konversi Mata Uang"<<endl;
cout<<"1. Rupiah - Dollar "<<endl;
cout<<"2. Rupiah - Real "<<endl;
cout<<"3. Rupiah - Euro "<<endl;
cout<<"4. Poundsterling - Rupiah "<<endl;
cout<<"5. Poundsterling - Euro "<<endl;
cout<<"6. Poundsterling - USD "<<endl;
cout<<"7. Euro - Rupiah "<<endl;
cout<<"8. Euro - Poundsterling "<<endl;
cout<<"9. Euro - USD "<<endl;
cout<<"10. USD - Rupiah "<<endl;
cout<<"11. USD - Poundsterling "<<endl;
cout<<"12. USD - Euro "<<endl;
cout<<"13. Kembali ke menu utama"<<endl;
cout<<"\nMasukkan pilihan anda = ";cin>>pilihan;

if (pilihan==1)
{cout<<"\n1. Rupiah - USD "<<endl;
 cout<<"Masukkan nilai rupiah = ";cin>>rupiah;
 usd = rupiah/13525;
 cout<<"Nilai dollar = "<<usd<<endl<<endl;

 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}

else if(pilihan==2)
{cout<<"\n2. Rupiah - Poundsterling "<<endl;
 cout<<"Masukkan nilai rupiah = ";cin>>rupiah;
 poundsterling = rupiah/17850;
 cout<<"Nilai poundsterling = "<<poundsterling<<endl<<endl;
 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}

else if(pilihan==3)
 {cout<<"\n3. Rupiah - Euro "<<endl;
 cout<<"Masukkan nilai rupiah = ";cin>>rupiah;
 euro = rupiah/15950;
 cout<<"Nilai euro = "<<euro<<endl<<endl;
 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}

else if(pilihan==4)
 {cout<<"\n4. Poundsterling - Rupiah "<<endl;
 cout<<"Masukkan nilai poundsterling = ";cin>>poundsterling;
 rupiah = poundsterling*15950;
 cout<<"Nilai rupiah = "<<rupiah<<endl<<endl;
 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}

else if(pilihan==5)
 {
 cout<<"\n5. Poundsterling - Euro "<<endl;
 cout<<"Masukkan nilai poundsterling = ";
 cin>>poundsterling;
 euro = poundsterling/0.89;
// euro = poundsterling/0.89;                                                  
 cout<<"Nilai euro = "<<euro<<endl<<endl;
 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}

else if(pilihan==6)
 {cout<<"\n6. Poundsterling - USD "<<endl;
 cout<<"Masukkan nilai poundsterling = ";cin>>poundsterling;
 usd = poundsterling/0.76;
 cout<<"Nilai usd = "<<usd<<endl<<endl;
 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}

else if(pilihan==7)
 {cout<<"\n7. Euro - Rupiah "<<endl;
 cout<<"Masukkan nilai euro = ";cin>>euro;
 rupiah = euro*15950;
 cout<<"Nilai rupiah = "<<rupiah<<endl<<endl;
 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}

else if(pilihan==8)
 {cout<<"\n8. Euro - Poundsterling "<<endl;
 cout<<"Masukkan nilai euro = ";cin>>euro;
 poundsterling = euro*0.89;
 cout<<"Nilai poundsterling = "<<poundsterling<<endl<<endl;
 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}

else if(pilihan==9)
 {cout<<"\n9. Euro - USD "<<endl;
 cout<<"Masukkan nilai euro = ";cin>>euro;
 usd = euro/0.85;
 cout<<"Nilai usd = "<<usd<<endl<<endl;
 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}

else if(pilihan==10)
 {cout<<"\n10. USD - Rupiah "<<endl;
 cout<<"Masukkan nilai usd = ";cin>>usd;
 rupiah =usd*13525;
 cout<<"Nilai rupiah = "<<rupiah<<endl<<endl;
 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}

else if(pilihan==11)
 {cout<<"\n11. USD - Poundsterling "<<endl;
 cout<<"Masukkan nilai usd = ";cin>>usd;
 poundsterling =usd*0.76;
 cout<<"Nilai poundsterling = "<<poundsterling<<endl<<endl;
 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}

else if(pilihan==12)
 {cout<<"\n12. USD - Euro "<<endl;
 cout<<"Masukkan nilai usd = ";cin>>usd;
 euro =usd*0.85;
 cout<<"Nilai euro = "<<euro<<endl<<endl;
 cout<<"1. Kembali ke menu konversi mata uang"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuZuhraida;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}
 else if(pilihan==13){
	//menuUtama();
 }else{
 cout<<"\nPilihan Tidak Tersedia \nSilahkan masukan kembali pilihan anda \n";
 goto menuZuhraida;
 }
}

Dewi()
{
    int pilihan,pilihan1;
    float C,F,K,R;
    menuDewi:
    clrscr();
    cout<<"program konversi suhu, pilih suhu asal"<<endl;

    cout<<"1 . Celcius"<<endl;
	 cout<<"2 . Fahreinheit"<<endl;
    cout<<"3 . Reamur"<<endl;
    cout<<"4 . Kelvin"<<endl;
 	cout<<"Masukan Pilihan Anda :";

    cin>>pilihan;
    if(pilihan==1){
    cout<<"Masukan Nilai Suhu Celsius :";
    cin>>C;
    F=((9*C)/5)+3;
    K=C+273.15;
    R=(4*C)/5;

    cout<<"Nilai Fahrenheit = "<<F<<endl<<"Nilai Kelvin = "<<K<<endl<<"Nilai Reamur = "<<R<<endl;
    getch();
    cout<<"1. Kembali ke menu konversi suhu"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuDewi;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
    }else if(pilihan==2){
    cout<<"Masukan Nilai Suhu Fahreinheit :";
    cin>>F;
    C=((5*F)/9)- 32;
    K=((5*F)/9)- 32+273;
    R=((4*F)/9)- 32;

    cout<<"nilai Celsius = "<<C<<endl<<"nilai Kelvin = "<<K<<endl<<"nilai Reamur = "<<R<<endl;
    getch();

    cout<<"1. Kembali ke menu konversi suhu"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuDewi;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
    }else if(pilihan==3){
    cout<<"Masukan Nilai Suhu Reamur :";
    cin>>R;
    C=((5*R)/4);
    K=((9*R)/4)+ 32;
    F=((5*R)/4)+273;

    cout<<"nilai Fahreinheit = "<<F<<endl<<"nilai Kelvin = "<<K<<endl<<"nilai Celcius = "<<C<<endl;
    getch();

    cout<<"1. Kembali ke menu konversi suhu"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuDewi;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
}else if(pilihan==4){
    cout<<"Masukan Nilai Suhu KELVIN :";
    cin>>K;
    C=K-273;
    F=((4*K)/5)-273;
    R=((9*K)/9)- 273+32;

    cout<<"nilai Celsius = "<<F<<endl<<"nilai Celcius = "<<C<<endl<<"nilai Reamur = "<<R<<endl;
    getch();

    cout<<"1. Kembali ke menu konversi suhu"<<endl;
 cout<<"2. Kembali ke menu utama"<<endl;
 cout<<"3. Keluar dari aplikasi"<<endl;
 cout<<"Masukan pilihan anda = ";
 cin>>pilihan1;
 cout<<endl;
 if(pilihan1==1){
	goto menuDewi;
 }else if(pilihan1==2){

 }else if(pilihan1==3){
   exit(0);
 }
    }else{
     cout<<"Pilihan yang anda masukan tidak tersedia, silanhkan ulangi lagi ";
			goto menuDewi;
    }
}

MenuUtama(){
menuUtama:
clrscr();
cout<<"Silahkan pilih konversi yang tersedia"<<endl;
cout<<"1. Konversi mata uang"<<endl;
cout<<"2. Konversi suhu"<<endl<<endl;
char pilihan;
cout<<"masukan pilihan anda : ";
cin>>pilihan;
	if(pilihan=='1'){
 		zuhraida();
      goto menuUtama;
	}else if(pilihan=='2'){
   	Dewi();
   }else{
    cout<<"Pilihan yang anda masukan tidak tersedia \nSilahkan masukan kembali pilihan anda \n"<<endl;
    goto menuUtama;
   }
}

main(){
cout<<"Selamat datang di Aplikasi konversi";
cout<<"\n==================================="<<endl;
MenuUtama();
getch();
}
