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

int sisa,kasus,sampai,ok,angka,hai,hasil,jumlah[15];
vector<int> data[15];
long long int hal,buka,bagi,jawab;

void hitung(){
	FOR(kasus,1,10){
		hasil=kasus*2%10;
		data[kasus].pb(kasus);
	//	cout<<"angka ke"<<kasus<<" :";
		while(hasil!=kasus){
			data[kasus].pb(hasil);
			hasil+=kasus;
			hasil=hasil%10;
		}
		FOR(ok,0,data[kasus].size()){
			jumlah[kasus]+=data[kasus][ok];
	//		cout<<data[kasus][ok]<<" ";  
		}
	//	cout<<"	Jum"<<jumlah[kasus]<<"\n";
	}
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	hitung();
	cin>>sampai;
	FOR(kasus,0,sampai){
		cin>>hal>>buka;
		bagi=hal/buka;
		angka=buka%10;
		if(angka==0||bagi==0){
			cout<<"0\n";
			continue;
		}
	//	cout<<bagi<<" "<<angka<<endl;
		jawab=jumlah[angka]*(bagi/data[angka].size());
		sisa=bagi%data[angka].size();
		FOR(ok,0,sisa){
			jawab+=data[angka][ok];
		}
		cout<<jawab<<endl;
	}
}
