#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok,hai,tmp,x,y;
long long int arr[1000];

int main(){
	cin>>sampai>>ok;
	for(kasus=0;kasus<sampai;kasus++){
		cin>>tmp;
		arr[kasus]=tmp+arr[kasus-1];
	}
	sort(arr,arr+sampai,greater<long long int>());
	x=ok+1-arr[0]+arr[kasus-1];
	
	cout<<x<<endl;
}
