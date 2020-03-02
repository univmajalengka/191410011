#include <iostream>
using namespace std;
int KJ(int j, int m, int d)
{
	int td;
	td = (j*3600)+(m*60)+d;
	return td;
}
int main ()
{
	int j1, m1, d1, j2, m2, d2, td1, td2, td3;
	cout<<"masukan jam 1 :";cin>>j1;
	cout<<"masukan menit 1 :"; cin>>m1;
	cout<<"masukan detik 1 :"; cin>>d1;
	cout<<"masukan jam 2 :"; cin>>j2;
	cout<<"masukan menit 2 :"; cin>>m2;
	cout<<"masukan detik 2 :"; cin>>d2;
	td1= KJ(j1,m1,d1);
	td2=KJ(j2,m2,d2);
	td3=td2-td1;
	cout<<td3;
}
