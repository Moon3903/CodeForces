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

long long int kasus,banyak,kotak,tambah,kurang,sampai,ok,hai,atas,bawah;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>banyak>>kotak>>tambah>>kurang;
	if(banyak%kotak==0){
		cout<<"0\n";
		return 0;
	}

	ok=banyak/kotak;
	bawah=banyak-(ok*kotak);
	atas=kotak*(ok+1)-banyak;
	cout<<min((bawah*kurang),(atas*tambah))<<endl;
}
