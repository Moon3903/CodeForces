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

int kasus,sampai,ok,hai,data[26];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai;
	FOR(kasus,0,sampai){
		int jumlah=0;
		cin>>hai;
		int min,a;
		stack <int> isi;
		FOR(ok,0,hai){
			cin>>a;
			isi.push(a);
		}
		min=isi.top();
		isi.pop();
		FOR(ok,1,hai){
			if(isi.top()>min){
				jumlah++;
			}
			if(min>isi.top()){
				min=isi.top();
			}
			isi.pop();
		}
		cout<<jumlah<<endl;
	}
}
