#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok,hai,tmp;
bool jwb,aa;
char arr[200][200];

void cek(int x, int y){
	jwb=true;
	tmp=0;
	if (arr[x-1][y-1]=='*')tmp++;
	if (arr[x-1][y]=='*')tmp++;
	if (arr[x-1][y+1]=='*')tmp++;
	if (arr[x+1][y]=='*')tmp++;
	if (arr[x+1][y-1]=='*')tmp++;
	if (arr[x+1][y+1]=='*')tmp++;
	if (arr[x][y+1]=='*')tmp++;
	if (arr[x][y-1]=='*')tmp++;
	if (arr[x][y]!=tmp+48){
		jwb=false;
	}
}

int main(){
	cin>>sampai>>hai;
	for(kasus=0;kasus<sampai;kasus++)
		for(ok=0;ok<hai;ok++){
			cin>>arr[kasus][ok];
			if(arr[kasus][ok]=='.')arr[kasus][ok]='0';
		}
	jwb=true;
	for(kasus=0;kasus<sampai;kasus++)
		for(ok=0;ok<hai;ok++){
			if(arr[kasus][ok]!='*'&&jwb==true)cek(kasus,ok);
		}
	if(jwb==true)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;	
	
}
