#include <iostream>
using namespace std;

int main(){

	int z[7] = {1,2,2,5,4,4,1};
	int n = 1000000;
	int s = 0;
	
	for(int i=0; i<7; i++){
		s = z[i] * n;
		cout<<s<<endl;
		n = n/10;
	}
	return 0;
}
