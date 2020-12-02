#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	char n[100];
	char s[100];
	
	cout<<"Program Polindrome"<<endl;
	cout<<"Masukan Kata : ";cin>>n;
	
	strcpy(s,n);
	strrev(s);
	
	if(strcmp(n,s) == 0 ) {
		
		cout<<"Termasuk Kata Palindrome, "<<s;
	} else {
		cout<<"Bukan Termasuk Kata Palindrome, "<<s;
	}
	return 0;
}

