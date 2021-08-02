#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok,hai,jwb;
string aa;

int main(){
	jwb=0;hai=0;
	cin>>sampai>>aa;
	if(sampai%2==0)ok=sampai/2;
	else ok=sampai/2+1;
	for(kasus=0;kasus<sampai;kasus++){
		if(aa[kasus]=='1')hai++;
		if(kasus!=sampai-1)
			if(aa[kasus]=='1'&&aa[kasus+1]==aa[kasus]){
				jwb=1; break;
			}
	}
	
	if(jwb==0&&hai==ok){
		cout<<"Yes"<<endl;
	}
	if(jwb==1||hai!=ok)cout<<"No"<<endl;
}
