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

int kasus,sampai,ok,hai;
long long int coba,ini,makan,setengah;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>ini;
	if(ini%2!=0)setengah=ini/2+1;
	else setengah=ini/2;
	while (makan<setengah){
		coba=ini;
		kasus++;
		makan=0;
		while(coba>0){
			if(coba>kasus){
				makan+=kasus;
				coba-=kasus;
				coba=coba-coba/10;
			}
			else{
				makan+=coba;
				coba=0;
			}
		}
	}
	cout<<kasus<<endl;
}
