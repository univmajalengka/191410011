#include <iostream>
using namespace std;

int main()
 {
 int i,x,nilai[100],hapus,jum_hapus;
 cout<< ("masukan jumlah angka:"); 
 cin >>x;
     for (i =0;i<x;i++)
     {
         cout<<"angka "<< i + 1 << " : "; 
		 cin>> nilai[i];
     }
 cout << ("\n");
 cout << ("Data yang akan dihapus:"); 
 cin >> hapus;
 cout << ("\n");
 cout << ("Data berhasil dihapus!\n");
 cout << ("\n");
 cout << ("Data Sekarang:\n");
 {
     for(i=0; i<x; i++)
         if(nilai[i] == hapus)
         {
             jum_hapus = jum_hapus + 1;
             }
     else
         {cout << nilai[i];}
     }
 }
