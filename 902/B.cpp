#include<bits/stdc++.h>
using namespace std;

#define pu push_back
#define ba back
#define pob pop_back
#define fr front

int hitung=1,kasus,sampai,ok,hai,tmp;
int warna[10005],parent[10005];
vector<int> data[10005];

int bfs(){
	queue<int> Q;
	tmp=1;
	while(data[tmp].size()!=0){
		Q.push(data[tmp].ba());
		data[tmp].pob();
		
	}
	while(!Q.empty()){
		if(warna[Q.fr()]!=warna[parent[Q.fr()]]){
			hitung++;
		}
		tmp=Q.fr();
		Q.pop();
		while(!data[tmp].empty()){
			Q.push(data[tmp].ba());
			data[tmp].pob();
		}
	}
}

int main(){
	cin>>sampai;
	for(kasus=2;kasus<=sampai;kasus++){
		cin>>tmp;
		data[tmp].pu(kasus);
		parent[kasus]=tmp;
	}
	for(kasus=1;kasus<=sampai;kasus++){
		cin>>warna[kasus];
	}
	
	bfs();
	cout<<hitung<<endl;
}
