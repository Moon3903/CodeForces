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
long long int data[26];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai;
	FOR(kasus,0,sampai){
		cin>>data[0]>>data[1]>>data[2];
		sort(data,data+3);
		data[2]-=data[1]-data[0];
		cout<<data[1]+data[2]/2<<endl;
	}
}
