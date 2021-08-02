#include<bits/stdc++.h>
using namespace std;

int kasus,war,sampai,tmp,hai;
array<int,200000> arr;
array<int,200000> vv;
long long int ok;

int main(){
	cin>>war>>sampai;
	for(kasus=0;kasus<war;kasus++){
		cin>>vv[kasus];
	}
	arr=vv;
	hai=war;
	while(sampai--){

		tmp=0;
		cin>>ok;
		kasus=war-hai;

		for(kasus;kasus<war;kasus++){
			if(ok>arr[kasus]){
				ok-=arr[kasus];
				arr[kasus]=0;
				hai--;

			}
			else if(ok==arr[kasus]){
				ok=0;
				arr[kasus]=0;
				hai--;
				
				break;
			}
			else{
				arr[kasus]-=ok;
				ok=0;
				break;
			}
		}
		if(ok==0&&hai>0){
		cout<<hai<<endl;
		}
		else if(ok>0||hai==0){
			arr=vv;
			cout<<war<<endl;;
			hai=war;
		}
		else{
		cout<<"salah"<<endl;
		}
	}
}
