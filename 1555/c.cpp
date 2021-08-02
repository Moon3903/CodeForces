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

int kasus,sampai,ok,hai,i,j,k;
int data1[100005],data2[100005],sum1[100005],sum2[100005];
string str;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>i;
    while (i--){
        printf("\n\n");
        cin>>sampai;
        FOR(kasus,0,sampai){
            cin>>data1[kasus];
            sum1[kasus+1] = sum1[kasus] + data1[kasus];
        }
            
        FOR(kasus,0,sampai){
            cin>>data2[kasus];
            sum2[kasus+1] = sum2[kasus] + data2[kasus];
        }
        
        int ans = 1e9, a, b;

        FOR(kasus,0,sampai){
            a = sum1[sampai]-sum1[kasus+1];
            b = sum2[kasus];
            ans = min(ans, max(a,b));
        }
        cout<<ans<<endl;
    }
    
}
