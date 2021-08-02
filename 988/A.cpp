#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define fr front()
#define pub push_back
#define FOR(x,y,z) for(x=y;x<z;x++)
#define pa make_pair

int kasus,sampai,ok,hai,tmp,hitung;
vector<int> data;
int cek[105];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai>>ok;
	hitung=0;
	FOR(kasus,0,sampai){
		cin>>tmp;
		if(cek[tmp]==0){
			data.pub(kasus+1);
			hitung++;
			cek[tmp]++;
		}
	}
	if(hitung>=ok){
		cout<<"YES"<<endl;
		FOR(hai,0,ok)cout<<data[hai]<<" ";
	}
	else cout<<"NO\n";
}
