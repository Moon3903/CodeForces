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

int kasus,sampai,ok,ganjil=0,genap=0,hai,data[26];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai;
	
	FOR(kasus,0,sampai){
		cin>>ok;
		if(ok%2==0){
			genap++;
		}
		else{
			ganjil++;
		}
	}
	if(genap>ganjil){
		cout<<ganjil<<endl;
	}
	else{
		cout<<genap;
	}
}
