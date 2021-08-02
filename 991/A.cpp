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

int kasus,a,b,c,d,sampai,ok,hai;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>a>>b>>c>>d;
	if(c>a||c>b){
		cout<<"-1\n";
		return 0;
	}
	a-=c;
	b-=c;
	if(a+b+c>=d){
		cout<<-1<<endl;
		return 0;
	}
	else{
		cout<<d-a-b-c<<endl;
	}
}
