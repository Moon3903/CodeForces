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

long long int kasus,sampai,ok,hai,data[200005],i,tot,jumlah,bagi;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>i;
    while(i--){
        tot = 0;
        cin>>sampai;
        FOR(kasus,0,sampai){
            cin>>data[kasus];
            tot += data[kasus];
        }
        if(tot%sampai!=0){
            cout<<"-1\n";
            continue;
        }
        if(tot == 0){
            cout<<"0\n";
            continue;
        }
        jumlah = tot/sampai;
        bagi = 0;
        FOR(kasus,0,sampai){
            if(data[kasus]>jumlah){
                bagi++;
            }
        }
        cout<<bagi<<endl;
    }
}
