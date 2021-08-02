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

int kasus,sampai,ok,hai,data[100005],i,j,k,l,tot;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>i;
    while(i--){
        cin>>sampai;
        tot=0;
        FOR(kasus,0,sampai){
            cin>>l;
            data[l]=kasus;
        }
        FOR(kasus,0,sampai-1){
            FOR(j,kasus+1,sampai){
                if(data[kasus]*data[j] == kasus+j+2)
                    tot++;
            }
        }
        cout<<tot<<endl;
    }
}
