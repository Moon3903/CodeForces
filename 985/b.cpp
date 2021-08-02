#include<bits/stdc++.h>
using namespace std;

int kasus,tmp,ini,itu,nyala,sampai,ok,hai;
int arr[3000];
char aa;

int main(){
	cin>>sampai>>hai;
	itu=0;
	for(kasus=0;kasus<sampai;kasus++){
		tmp=0;
		ini=0;
		for(ok=0;ok<hai;ok++){
			cin>>aa;
			if(aa=='1'){
				tmp++;
				arr[ok]++;
				if(arr[ok]>1){
					ini++;
				}
			}
		}
		if(ini==tmp)itu=1;
	}
	for(ok=0;ok<hai;ok++){
		if(arr[ok]==0){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	if(itu==1)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
