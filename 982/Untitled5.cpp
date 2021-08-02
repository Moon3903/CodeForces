#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok,hai,jwb,tmp;
int arr[200000],vv[200000],data[200000];
char aa;

int binser(int x,int y,int z){
	int mid;
	while(arr[mid]!=z){
		mid=(x+y)/2;
		if(x>y){
			mid=-1;
			break;
		}
		
		if(arr[mid]<z){
			x=mid+1;
		}
		else y=mid-1;
	}
	return (mid);
}

int main(){
	cin>>sampai;
	for(kasus=0;kasus<sampai;kasus++){
		cin>>arr[kasus];
		vv[kasus]=arr[kasus];
	}
	
	sort(arr,arr+sampai);
	for(kasus=0;kasus<sampai;kasus++){
		data[binser(0,sampai-1,vv[kasus])]=kasus;
	}
	
	ok=0;tmp=0;
	for(kasus=0;kasus<sampai*2;kasus++){
		cin>>aa;
		if(aa=='0'){
			cout<<data[ok]+1<<" ";
			arr[tmp]=data[ok]+1;
			tmp++;
			ok++;
		}
		else if(aa=='1'){
			tmp--;
			cout<<arr[tmp]<<" ";
		}
	}
}
