#include<bits/stdc++.h>
using namespace std;

int kasus,ok,hai;
long long int sampai;

int main(){
	cin>>sampai;
	sampai++;
	if(sampai==1)cout<<0;
	else{
	if(sampai%2==0)cout<<sampai/2;
	else cout<<sampai;
}
}
