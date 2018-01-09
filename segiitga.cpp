#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main(){
   int a;
   int b;
   int c;
   cout<<"Masukan berapa tinggi segitiga = ";
   cin>>a;
   int x=0;
   for(b = 0; b < a; b++){
      for(c=0;c<b;c++){
        cout<<"*";
      }
      cout<<endl;
   }
  // for(b = b; b > 0; b--){
  //    for(c=0;c<b;c++){
  //      cout<<"*";
  //    }
  //    cout<<endl;
  // }
	getch();
}
