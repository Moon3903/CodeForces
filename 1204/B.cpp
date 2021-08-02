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

int kasus,sampai,kali,ok,hai,data[26],bawah,atas,sudah,tmp,hasil;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai>>bawah>>atas;
	kali=1;
	for(tmp=1;tmp<bawah;tmp++){
		kali*=2;
		hasil+=kali;
		sudah++;
	}
	cout<<hasil+bawah-sudah<<endl;
}
