#include<bits/stdc++.h>
using namespace std;
#define pub push_back

int tinggi,kasus,sampai,ok,hai,ke,tmp;
int arr[100005];
bool data[100005];
vector<int> sie;

int sieve(){
	for(ok=2;ok<100001;ok++){
		if(data[ok]==0){
			sie.pub(ok);
			for(tmp=ok+ok;tmp<=100000;tmp+=ok){
				data[tmp]=1;
			}
		}
	}
}

int banyak(){
	tinggi=0;
	for(kasus=0;kasus<sampai;kasus++){
		ke=0;cout<<" kasus "<<kasus<<endl;
		while(sie[ke]<=arr[kasus]){
			if(arr[kasus]%sie[ke]==0){
				data[sie[ke]]+=1;
				cout<<data[sie[ke]]<<" / "<<sie[ke]<<" ";
			}
		ke++;cout<<endl;
		}
	}
}

int jwb(){
	for(ok=2;ok<100001;ok++){
		if(tinggi<data[ok])tinggi=ok;
	}
}

int main(){
	
	sieve();
	cin>>sampai;
	if(sampai==1){
		cout<<1<<endl;return 0;
	}
	for(kasus=0;kasus<sampai;kasus++)cin>>arr[kasus];
	banyak();
	jwb();
	cout<<tinggi<<endl;
}
