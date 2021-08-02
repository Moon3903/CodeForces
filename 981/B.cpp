#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define fr front()
#define pub push_back
#define FOR(x,y,z) for(x=y;x<z;x++)
#define pa make_pair

int kasus,sampai,tmp,temp,ok,hai;
pair <int,int> data[100005],arr[100005];
long long int jumlah=0;

int main(){
	cin>>sampai;
	FOR(kasus,0,sampai){
		cin>>tmp>>temp;
		data[kasus]=pa(tmp,temp);
	}
	sort(data,data+sampai);
	cin>>ok;
	FOR(kasus,0,ok){
		cin>>tmp>>temp;
		arr[kasus]=pa(tmp,temp);
	}	
	sort(arr,arr+ok);
	tmp=0;temp=0;
	while(tmp<sampai||temp<ok){
		if(tmp<sampai&&temp<ok){
			if(data[tmp].fi>arr[temp].fi){
				jumlah+=arr[temp].se;
				temp++;cout<<"arr "<<jumlah<<" temp "<<temp<<endl;
			}
			if(data[tmp].fi<arr[temp].fi){
				jumlah+=data[tmp].se;
				tmp++;cout<<"data "<<jumlah<<endl;
			}
			if(data[tmp].fi==arr[temp].fi){
				jumlah+=max(data[tmp].se,arr[temp].se);
				tmp++;temp++;cout<<" tinggi "<<jumlah;
			}
		}
		else if(temp>=ok){
			jumlah+=data[tmp].se;
			tmp++;cout<<"data "<<jumlah<<endl;
		}
		else {
			jumlah+=arr[temp].se;
			temp++;cout<<"arr "<<jumlah<<" temp "<<temp<<endl;
		}
	}
	cout<<jumlah<<endl;
}
