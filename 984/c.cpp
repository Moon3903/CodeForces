#include<bits/stdc++.h>
using namespace std;

int kasus,atas,bawah,sampai,ok,hai,tmp;
int arr[5000];

int main(){
	cin>>sampai;
	for(kasus=0;kasus<sampai;kasus++)cin>>arr[kasus];
	cin>>hai;
	for(ok=0;ok<hai;ok++){
		cin>>bawah>>atas;
		bawah--;
		tmp=0;
		for(bawah;bawah<atas;bawah++){
			tmp=tmp^arr[bawah];
		}
		cout<<tmp<<endl;
	}
}
