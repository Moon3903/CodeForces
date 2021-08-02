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

int kasus,sampai,ok,hai,data[26],i,j,k,l;

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>i;
    while(i--){
        cin>>sampai;
        if(sampai<=3){
            cout<<sampai<<" ";
            FOR(kasus,1,sampai){
                cout<<kasus<<" ";
            }
            cout<<endl;
        }else{
            for(kasus=1;kasus<sampai-2;kasus+=2){
                cout<<kasus+1<<" "<<kasus<<" ";
            }
            if(sampai%2==0){
                cout<<sampai<<" "<<sampai-1;
            }
            else{
                cout<<sampai<<" "<<sampai-2<<" "<<sampai-1;
            }
            puts("");
        }
    }
}
