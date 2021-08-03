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
#define INF 1000000000

int kasus,sampai,ok,hai,data[26],i,a,b,c,d;
string str;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>i;
    while (i--){
        int w,h;
        cin>>w>>h;
        
        int xmax,xmin,ymax,ymin;
        cin>>a>>b>>c>>d;
        xmax = max(a,w-c);
        xmin = min(a,w-c);
        ymax = max(b,h-d);
        ymin = min(b,h-d);

        int wneed,hneed;
        cin>>wneed>>hneed;

        int ans, xmove, ymove;
        xmove = max(0,wneed-xmax);
        ymove = max(0,hneed-ymax);

        if(!xmove && !ymove){
            cout<<"0\n";
            continue;
        }
		
		if(ymove > ymin){
			ymove = INF;
		}
		
		if(xmove > xmin){
			xmove = INF;
		}
		
        ans = min(ymove,xmove);
        
        if(ans == INF){
        	cout<<"-1\n";
        	continue;
        }
        
        cout<<ans<<endl;
    }
    
}
