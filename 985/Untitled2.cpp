#include<bits/stdc++.h>
using namespace std;

int kasus,tmp,black,white,sampai,ok,hai;
int arr[1000];

int hitam(int x){
	tmp=0;
	for(x;x>=0;x--){
		tmp+=abs(arr[x]-ok);
		ok-=2;
		
	}
	return tmp;
}

int putih(int x){
	tmp=0;
	for(kasus=0;kasus<x;kasus++){
		tmp+=abs(arr[kasus]-ok);
		ok+=2;
		
	}
	return tmp;
}

int main(){
	cin>>sampai;
	hai=sampai/2;
	for(kasus=0;kasus<hai;kasus++){
		cin>>arr[kasus];
	}
	sort(arr,arr+kasus);
	ok=sampai-1;
	black=hitam(hai-1);
	ok=2;
	white=putih(hai);
	if(black>white)cout<<white<<endl;
	else if (white>=black) cout<<black<<endl;
}
