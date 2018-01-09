#include <iostream>;
#include <time.h>;
#include <conio.h>

void wait()
	{
   // jeda waktu 1 detik
    clock_t tunggu;
    tunggu = clock() + CLOCKS_PER_SEC;
    while (clock() < tunggu) {
    }
}

void main()
{
	time_t waktu;
   int l1 = 10;
   int l2 = 5;
   int l3 = 15;
   int l4 = 25;

	char a[] = "Lampu Bohlam Warna Hijau";
	char b[] = "Lampu Bohlam Warna Kuning";
	char c[] = "Lampu Strip Warna Merah";
   char d[] = "Lampu Strip Warna Kuning";

   int j1 = 0;
   int j2 = 0;
   int j3 = 0;
   int j4 = 0;

    int w = 1;
    while(1)
    {
      if(w%l1 == 0){
      	j1++;
      }
      if(w%l2 == 0){
      	j2++;
      }
      if(w%l3 == 0){
      	j3++;
      }
      if(w%l4 == 0){
      	j4++;
      }
      //cout<<ctime(&waktu);
      wait();
    	clrscr();
      cout<<"Waktu "<<w<<" Detik"<<endl;
      cout<<a<<" "<<j1<<"\n";
      cout<<b<<" "<<j2<<"\n";
      cout<<c<<" "<<j3<<"\n";
      cout<<d<<" "<<j4<<"\n";
      w++;
    }
}
