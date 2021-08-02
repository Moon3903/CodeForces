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

int kasus,sampai,ok,hai,total,hitung;
double cek;
int data[105];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai;
	FOR(kasus,0,sampai){
		cin>>data[kasus];
		total+=data[kasus];
	}
	sort(data,data+sampai);
	cek=total;
	while(cek/sampai<4.5){
		cek=cek-data[hitung]+5;
		hitung++;
	}
	cout<<hitung<<endl;
}
