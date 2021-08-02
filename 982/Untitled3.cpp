#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok,hai,jwb,tmp;
int arr[200000],vv[200000],data[200000];
char aa;

int main(){
	ok=0;tmp=0;
	cin>>sampai;
	for(kasus=0;kasus<sampai;kasus++){
	cin>>arr[kasus];
	vv[kasus]=arr[kasus];
	}
	sort(vv,vv+sampai);
	for(kasus=0;kasus<sampai*2;kasus++){
		cin>>aa;
		if(aa=='0'){
			for(hai=0;hai<sampai;hai++){
				if(vv[ok]==arr[hai]){
					data[tmp]=hai+1;
					tmp++;
					ok++;
					cout<<hai+1<<" ";
					break;
				}
			}
		}
		else if(aa=='1'){
			tmp--;
			cout<<data[tmp]<<" ";
			
		}
	}
}
