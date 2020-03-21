#include <iostream>
using namespace std;
int main (){
	int a [4][4][2]= { {1,2,3,2} ,{4,5,6,4} ,{7,8} };
	int b [4][4][2]= { {1,2,3,2} ,{4,5,6,4} ,{7,8} };
	int c [4][4][2];
	for (int x =0;x<4;x++){
		for (int y=0; y<4;y++)
		for (int z=0; z<2;z++){
			c [x][y][z]= a [x][y][z] + b [x][y][z];
		}
	}
	for (int x =0;x<4;x++){
		for (int y=0; y<4;y++)
		for (int z=0; z<2;z++) {
			cout<<c [x][y][z]<<" ";
		}
			
			cout<<endl;
		}
}
