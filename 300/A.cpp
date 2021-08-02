#include<bits/stdc++.h>
using namespace std;

#define pu push_back
#define pob pop_back
#define ba back

int kasus,tmp,sampai,ok,hai;
vector<int> a,b,c;

int main(){
	cin>>sampai;
	for(kasus=0;kasus<sampai;kasus++){
		cin>>tmp;
		if(tmp<0)a.pu(tmp);
		else if(tmp>0)b.pu(tmp);
		else c.pu(tmp);
	}
	if(a.size()==0&&b.size()>1){
		a.pu(b.ba());b.pob();
	}
	if(b.size()==0&&a.size()>1){
		b.pu(a.ba());a.pob();
		b.pu(a.ba());a.pob();
	}
	if(a.size()%2==0){
		c.pu(a.ba());a.pob();
	}
	if(c.size()==0&&a.size()>1){
		c.pu(a.ba());a.pob();
	}
	cout<<a.size();
	for(auto x:a)cout<<" "<<x;
	cout<<"\n"<<b.size();
	for(auto x:b)cout<<" "<<x;
	cout<<"\n"<<c.size();
	for(auto x:c)cout<<" "<<x;
	cout<<"\n";
}
