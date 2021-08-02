#include<bits/stdc++.h>
using namespace std;

int kasus,kita,nol,awal,tmp,sampai,ok,hai;
char aa;

int main(){
	cin>>sampai;
	awal=0;
	nol=0;
	kita=0;
	for(kasus=0;kasus<sampai;kasus++){
		cin>>aa;
		if(aa=='1'){
			awal=1;
			kita++;
			nol=0;
			if(kita==2){
				cout<<"No\n";
				return 0;
			}
		}
		else{
			kita=0;
			nol++;
			if(nol==2&&awal==0){
				cout<<"No"<<endl;
				return 0;
			}
			if(nol==3){
				cout<<"No\n";
				return 0;
			}
		}
	}
	if(awal==0&&sampai<=2){
		cout<<"No\n";
		return 0;
	}
	if(nol==2){
		cout<<"No"<<endl;
	}
	else cout<<"Yes\n";
}
