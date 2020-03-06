#include <iostream>
using namespace std;
int data [100];
int n;
int main ()
{
	cout<< "Masukan jumlah data:";
	cin>>n;
	cout<<endl;
	for(int i=0;i<=n;i++)
{
cout<<"Masukan data ke :"<<i<<":";
cin>>data[i];
}
cout<<endl;
cout<<"Data yang dimasukan:";
for(int i=0;i<=n;i++)
{
	cout <<" "<<data[i];
}
return 0;
}


