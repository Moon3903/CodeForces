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

int kasus,sampai,ok,hai,udah;
string period;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai>>ok;
	cin>>period;
	kasus=0;
	while(kasus+ok<sampai){
		if(period[kasus]=='.'&&period[kasus+ok]=='.'){
			period[kasus]='1';
			period[kasus+ok]='0';
			udah=1;
			break;
		}
		else if(period[kasus]=='.'){
			if(period[kasus+ok]=='1'){
				period[kasus]='0';
			}
			else period[kasus]='1';
			udah=1;
			break;
		}
		else if(period[kasus+ok]=='.'){
			if(period[kasus]=='1'){
				period[kasus+ok]='0';
			}
			else period[kasus+ok]='1';
			udah=1;
			break;
		}
		else if(period[kasus]!=period[kasus+ok]){
			udah=1;
			break;
		}
		kasus++;
	}
	if(udah==0){
		cout<<"No\n";
		return 0;
	}
	FOR(kasus,0,sampai){
		if(period[kasus]=='.')cout<<1;
		else cout<<period[kasus];
	}
}
