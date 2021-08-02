#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define fr front()
#define pub push_back
#define FOR(x,y,z) for(x=y;x<z;x++)
#define pa make_pair

int kasus,sampai,ok,hai,tidak;
string data[105];

bool ukur(string a,string b){
	return a.length()<b.length();
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>sampai;
	FOR(kasus,0,sampai){
		cin>>data[kasus];
	}
	sort(data,data+sampai,ukur);
	FOR(kasus,1,sampai){
		if (data[kasus].find(data[kasus-1]) == string::npos) {
			cout<<"NO\n";
			return 0;
		} 
	}
	cout<<"YES\n";
	FOR(kasus,0,sampai){
		cout<<data[kasus]<<endl;
	}
}
