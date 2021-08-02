#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok;
long long int tmp,hm,hai;
long long int arr[1000000];

int main(){
	cin>>sampai>>ok;
	for(kasus=1;kasus<=sampai;kasus++){
		cin>>tmp;
		arr[kasus]=tmp+arr[kasus-1];
	}
	tmp=1;
	for(kasus=0;kasus<ok;kasus++){
		cin>>hai;
		while(arr[tmp]<hai)tmp++;
		
		cout<<tmp<<' '<<hai-arr[tmp-1]<<endl;
	}
}
