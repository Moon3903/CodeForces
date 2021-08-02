#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok,hai,tmp;
int arr[1000],vv[1000],tt[1000];

int main(){
	cin>>sampai;
	for(kasus=0;kasus<sampai;kasus++){
		cin>>arr[kasus];
	}
	kasus--;
	for(kasus;kasus>=0;kasus--){
		if(vv[arr[kasus]]==0){
			tt[tmp]=arr[kasus];
			tmp++;
			vv[arr[kasus]]++;
		}
		else sampai--;
	}
	cout<<sampai<<endl;
	while (sampai--){
		cout<<tt[sampai]<<' ';
	}
	cout<<endl;
}
