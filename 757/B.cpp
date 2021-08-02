#include<bits/stdc++.h>
using namespace std;

int tinggi,kasus,sampai,ok,hai,tmp;
int arr[100005];
bool data[10005];

int sieve(){
for(ok=2;ok<10001;ok++){
		if(data[ok]==0){
			for(tmp=ok+ok;tmp<=10000;tmp+=ok){
				data[tmp]=1;
			}
		}
	}
}

int banyak(){
	tinggi=0;
	for(ok=2;ok<sampai;ok++){
		if(ok>=10000)break;
		tmp=0;
		if(data[ok]==0){
			for(hai=0;hai<sampai;hai++){
				if(arr[hai]%ok==0){
					tmp++;
				}
			}
			if(tmp>tinggi)tinggi=tmp;
		}
	}
}

int main(){
	cin>>sampai;
	for(kasus=0;kasus<sampai;kasus++)cin>>arr[kasus];
	sort(arr,arr+sampai);
	if(sampai==1){
	cout<<'1'<<endl;return 0;
	}
	sieve();
	banyak();
	cout<<tinggi<<endl;
}
