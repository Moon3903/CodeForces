#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define fr front()
#define pub push_back
#define FOR(x,y,z) for(x=y;x<z;x++)
#define pa make_pair

int kasus,hitung,sampai,ok,hai,no=0;
string kata;

int main(){
	cin>>kata;
	kasus=0;sampai=kata.length()-1;
	while(kasus<sampai){
		if(kata[kasus]!=kata[sampai])no=1;
		kasus++;sampai--;
	}
	hitung++;
	if(no==1){
		cout<<kata.length();
		return 0;
	}
	for(kasus=0;kasus<kata.length()-1;kasus++){
		if(kata[kasus]==kata[kasus+1])hitung++;
	}
	if(kata.length()==hitung){
		cout<<0<<endl; return 0;
	}
	cout<<kata.length()-1<<endl;
}
