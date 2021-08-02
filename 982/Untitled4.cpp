#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok,hai,jwb;
string aa;

int main(){
	jwb=0;hai=0;
	cin>>sampai>>aa;
	for(kasus=0;kasus<sampai;kasus++){
		if(kasus==0){
			if(aa[kasus]=='1')hai=1;
			else hai=0;
		}
		else if(aa[kasus]=='1'&&hai==0){
			hai=1;
		}
		else if (aa[kasus]=='0'&&hai==1){
			hai=0;
		}
		else {
			jwb=1;
			break;
		}
		
	}
	if(jwb==1)cout<<"NO";
	else cout<<"YES";
	
}
