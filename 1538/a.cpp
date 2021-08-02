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

int kasus,sampai,ok,hai,data[105],i;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>i;
    while(i--){
        cin>>sampai;
        int a = -1,
            b = -1,
            c = 300,
            d = -1;
        FOR(kasus,0,sampai){
            cin>>data[kasus];
            if(data[kasus]>a){
                a = data[kasus];
                b = kasus;
            }
            if(data[kasus] < c){
                c = data[kasus];
                d = kasus;
            }
        }
        int e,f;
        if(b > d){
            e = d;
            f = b;
        }
        else{
            e = b;
            f = d;
        }

        int depan,belakang,campur;
        depan = f + 1;
        belakang = sampai - e;
        campur = sampai - f + e + 1;

        if(depan <= belakang && depan <= campur){
            cout<<depan<<endl;
        }
        else if(belakang <= campur){
            cout<<belakang<<endl;
        }
        else
            cout<<campur<<endl;
    }
}
