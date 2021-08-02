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

int kasus,sampai,ok,hai,a,b,c;
char bunga;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	while(cin>>bunga){
		if(bunga=='.'){
			a=0;b=0;c=0;
		}
		if(bunga=='A'){
			a++;
		}
		if(bunga=='B'){
			b++;
		}
		if(bunga=='C'){
			c++;
		}
		if(a>0&&b>0&&c>0){
			cout<<"Yes\n";
			return 0;
		}
	}
	cout<<"No\n";
}
