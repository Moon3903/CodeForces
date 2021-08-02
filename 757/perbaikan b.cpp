#include<bits/stdc++.h>
using namespace std;

int tinggi,kasus,tmp,sampai,bagi,cek,ok,hai;
int data[100005];
vector<int> arr;

int prima(int x){
	bagi=3;
	
	while(bagi*bagi<=x){
		while(x%bagi==0){
			cek=1;
			x/=bagi;
		}
		if(cek==1){
			data[bagi]++;
			cek=0;
		}
		bagi+=2;
		
	}
	if(x>2)data[x]++;
}

int nilai(){
	tinggi=0;
	for(int i=2;i<100001;i++){
		if(data[i]>tinggi){
			tinggi=data[i];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai;
	
	while(sampai--){
		int i;
		cin>>i;
		cek=0;
		while(i%2==0){
			cek=1;
			i/=2;
		}
		if(cek==1){
			data[2]++;cek=0;
		}
		prima(i);
	}

	nilai();
	if(tinggi!=0)cout<<tinggi<<endl;
	else cout<<1<<endl;
}
