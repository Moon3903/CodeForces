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

int kasus,n,m,sampai,ok,hai,beli,kali,akhir,drink,hitung;
int punya[10000005],minum[10000005],toko[10000005];
map<int,vector<int>> jawab;
vector<int> tempat,jwb;
deque<int> urutan,ambil;

bool oh(int a,int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n>>m>>kali;
	FOR(kasus,0,n){
		cin>>ok;
		akhir=max(akhir,ok);
		minum[ok]++;
	}
	FOR(kasus,0,m){
		cin>>ok;
		toko[ok]++;
		jawab[ok].push_back(kasus+1);
		tempat.pb(ok);
		akhir=max(akhir,ok);
	}
	sort(tempat.begin(),tempat.end(),oh);
	FOR(kasus,0,akhir+1){
		drink+=minum[kasus];
		if(drink>(kali*(kasus+1))){
			cout<<-1<<endl;
			return 0;
		}
		while((drink+beli)<(kali*(kasus+1))&&!tempat.empty()){
			urutan.pb(tempat.back());
			tempat.pob;
			ambil.pb(jawab[urutan.back()].back());
			jawab[urutan.back()].pob;
			beli++;
		}
		while((drink+beli)>(kali*(kasus+1))){
			urutan.pof;
			ambil.pof;
			beli--;
		}
		while(tempat.back()==kasus){
			tempat.pob;
		}
	}
	cout<<beli<<endl;
	while(!ambil.empty()){
		cout<<ambil.fr<<" ";
		ambil.pof;
	}
}
