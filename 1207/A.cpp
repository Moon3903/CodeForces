#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define fr front()
#define pb push_back
#define FOR(x,y,z) for(x=y;x<z;x++)
#define pa make_pair
#define pob pop_back()
#define pof pop_front()
#define pf push_front

int kasus,sampai,ok,hai,data[26];
int ham,chik,pet,harga;

int main(){
//	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai;
	FOR(kasus,0,sampai){
		cin>>pet>>ham>>chik;
		cin>>ok>>hai;
		harga=0;
		pet/=2;
		while(pet!=0&&(ham!=0||chik!=0)){
	//		cout<<"sisa "<<pet<<" "<<ham<<" "<<chik<<"\n";
			if((ok>hai||chik==0)&&ham>0){
				ham--;
				pet--;
				harga+=ok;
//				cout<<"ini\n";
			}
	//cout<<"sampe\n";
			else if(chik>0){
				chik--;
				pet--;
				harga+=hai;
//				cout<<"itu\n";
			}
		}
		cout<<harga<<endl;
	}
}
