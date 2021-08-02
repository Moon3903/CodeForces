#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define fr front()
#define pub push_back
#define FOR(x,y,z) for(x=y;x<z;x++)
#define pa make_pair

int kasus,sampai,ok,hai,tmp;
int data[10],jwb[10000];

void awal(){
	cout<<"? 1 2\n"<<flush;
	cin>>data[1];
	cout<<"? 1 3\n"<<flush;
	cin>>data[2];
	cout<<"? 2 3\n"<<flush;
	cin>>data[3];
	jwb[2]=(data[1]+data[3]-data[2])/2;
	jwb[1]=data[1]-jwb[2];
	jwb[3]=data[2]-jwb[1];
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai;
	awal();
	FOR(kasus,4,sampai+1){
		cout<<"? "<<kasus-1<<" "<<kasus<<endl<<flush;
		cin>>tmp;
		jwb[kasus]=tmp-jwb[kasus-1];
	}
	cout<<"!";
	FOR(kasus,1,sampai+1){
		cout<<" "<<jwb[kasus];
	}
	cout<<endl<<flush;
}
