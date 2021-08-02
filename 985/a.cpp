#include<bits/stdc++.h>
using namespace std;

int kasus,tmp,black,white,sampai,ok,hai;
int arr[1000];

int hitam(int x){cout<<" x "<<x<<endl;
	tmp=0;
	for(x;x>=0;x--){
		cout<<" x "<<arr[x]<<" ok "<<ok<<endl;
		tmp+=abs(arr[x]-ok);
		ok-=2;
	}
	return tmp;
}

int main(){
	cin>>sampai>>ok;
	hai=kasus/2;
	for(kasus=0;kasus<hai;kasus++){
		cin>>arr[kasus];
	}
	ok=sampai;
	cout<<"hai "<<hai<<endl;
	black=hitam(hai-1);
	cout<<black;
}
