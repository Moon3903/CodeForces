#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define fr front()
#define pb push_back
#define FOR(x,y,z) for(x=y;x<z;x++)
#define pa make_pair
#define pob pop_back()
#define pof pop_front()
#define pf push_front

int kasus,sampai,kali,hasil,ok,hai,data[26];
string datang;
bool udah;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>datang;
//	cerr<<datang.length();
	FOR(kasus,1,datang.length()){
//		cerr<<kasus<<endl;
		if(datang[kasus]=='1')udah=1;
	}
	ok=datang.length();
//	cerr<<ok<<" ini ok \n";
	if(udah==1&&(ok%2)!=0)cout<<1+datang.length()/2<<endl;
	else cout<<datang.length()/2<<endl;
}
