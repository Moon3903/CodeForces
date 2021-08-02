#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok,hai,fi,se;
long long int arr[150000];
long long int ren,tmp,ful;

int main(){
	ful=0;
	cin>>sampai;
	
	for(kasus=0;kasus<sampai;kasus++){
		cin>>arr[kasus];
		if(arr[kasus]>ful)ful=arr[kasus];
	}
	
	fi=0;	se=0;
	tmp=0;	ren=0;	
	
	while(ful!=ren){
		tmp=ren;
		ren=1844674407370955161;
		for(ok=0;ok<kasus;ok++){
			if(ren>tmp&&ren>arr[ok]&&tmp<arr[ok]){
				ren=arr[ok];
			}
		}
		fi=-1;
		for(ok=0;ok<kasus;ok++){
			if(fi==-1&&arr[ok]==ren){
				fi=ok;
			}
			else if(fi!=-1&&arr[ok]==ren){
				arr[fi]=0;
				arr[ok]=arr[ok]*2;
				sampai--;
				if(ful<arr[ok])ful=arr[ok];
				fi=-1;
			}
		}
	}
	
	cout<<sampai<<endl;
	
	for(se=0;se<kasus;se++){
		if(arr[se]>0)cout<<arr[se]<<" ";
	}
}
