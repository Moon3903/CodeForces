#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok,hai,tmp,x,y;
int arr[1000000],vv[1000000];
int meh[1000000];
int main(){
	cin>>sampai>>ok;
	for(kasus=0;kasus<sampai;kasus++){
		cin>>arr[kasus];
		meh[kasus]=arr[kasus];
	}
	sort(meh,meh+sampai);
	for(kasus=0;kasus<sampai;kasus++){
		tmp=0;
		while(arr[kasus]>meh[tmp]){
			vv[kasus]++;
			tmp++;
		}
	}
	for(kasus=0;kasus<ok;kasus++){
		cin>>x>>y;
		x--;y--;
		if(arr[x]>arr[y])vv[x]--;
		else if(arr[y]>arr[x])vv[y]--;
		
	}
	for(kasus=0;kasus<sampai;kasus++){
		cout<<vv[kasus]<<' ';
	}
}
