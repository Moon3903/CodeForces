#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok,hai,tmp;
char aa;

int main(){
	cin>>sampai;
	for(kasus=0;kasus<sampai;kasus++){
		cin>>aa;
		if(aa=='x')tmp++;
		else {
			if(tmp>2){
			hai=hai+tmp-2;	
			}
			tmp=0;
		}
	}
	if(tmp>2){
			hai=hai+tmp-2;	
	}
	cout<<hai<<endl;
}
