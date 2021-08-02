#include<bits/stdc++.h>
using namespace std;

int kasus,jwb,hai,sampai,w,ok,sem,tinggi,rendah,tmp;
int arr[2000];

int main(){
	cin>>sampai>>w;
	for(kasus=0;kasus<sampai;kasus++){
		cin>>sem;
		hai+=sem;
		arr[kasus]=hai;
	}
	sort(arr,arr+kasus);
	if(abs(arr[0])>w){
		cout<<0<<endl;
		return 0;
	}
	if(arr[sampai-1]>w){
		cout<<0<<endl;
		return 0;
	}
	if(arr[sampai-1]>0){
		tinggi=w-arr[sampai-1];
	}
	if(arr[0]<0){
		rendah=w+arr[0];
		rendah=w-rendah;
	}
	
	if(arr[sampai-1]>0){
		jwb=tinggi-rendah+1;
		if(jwb>0){
			cout<<tinggi-rendah+1<<endl;
		}
		else cout<<0;
		return 0;
	}
	if(arr[0]<0){
		cout<<w+arr[0]+1;
		return 0;
	}
	if(arr[0]==arr[kasus-1]){
		cout<<w+1;return 0;
	}
	cout<<1;
}
