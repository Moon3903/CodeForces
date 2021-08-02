#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define fr front()
#define pub push_back
#define FOR(x,y,z) for(x=y;x<z;x++)
#define pa make_pair

int kasus,kosong,isi,sampai,jwb,ok,hai;
int data[5005];

int main(){
	cin>>sampai;
	FOR(kasus,0,sampai){
		cin>>data[kasus];
	}
	jwb=sampai;kosong=1;
	sort(data,data+sampai,greater<int>());
	FOR(kasus,1,sampai){
		if(data[kasus]==data[kasus-1]){
			if(isi>0){
				jwb--;
				isi--;
			}
			else {
				kosong++;
			}
		}
		else{
			if(isi>0){
				jwb--;
			}
			else{
				kosong++;
				isi=kosong;
			}
		}
	}
	cout<<jwb<<endl;
}
