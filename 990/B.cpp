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

int kasus,sampai,ok,hai,banyak;
int data[200005];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai>>ok;
	FOR(kasus,0,sampai){
		cin>>data[kasus];
	}
	sort(data,data+sampai);
	banyak=sampai;
	FOR(kasus,0,sampai-1){
		if(data[kasus]<data[kasus+1]){
			if(data[kasus]+ok>=data[kasus+1]){
				banyak--;
				hai=kasus-1;
				while(data[kasus]==data[hai]&&hai>=0){
					hai--;banyak--;
				}
			}
		}
	}
	cout<<banyak<<endl;
}
