#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define fr front()
#define pub push_back
#define FOR(x,y,z) for(x=y;x<z;x++)
#define pa make_pair

int kasus,sampai,ok,hai,lead,hitung=0;
long long int jwb=5000000000000000000,sem,tmp;
string nomor;
int data[10];
vector<int> posisi[10];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>nomor;
	kasus=nomor.length();
	while(kasus--){
		if(nomor[kasus]=='0'){
			data[0]++;
			posisi[0].pub(kasus+1);
		}
		if(nomor[kasus]=='5'){
			data[5]++;
			posisi[5].pub(kasus+1);
		}
		if(nomor[kasus]=='7'){
			data[7]++;
			posisi[7].pub(kasus+1);
		}
		if(nomor[kasus]=='2'){
			data[2]++;
			posisi[2].pub(kasus+1);
		}
		if(data[0]>1){
			tmp=nomor.length()-posisi[0][0]+nomor.length()-posisi[0][1]-1;
			jwb=min(jwb,tmp);
			hitung=2;
		}
		if(data[0]>0&&data[5]>0){
			if(posisi[5][0]<posisi[0][0]){
				tmp=nomor.length()-posisi[0][0]+nomor.length()-posisi[5][0]-1;
				jwb=min(tmp,jwb);
			}
			else {
				tmp=nomor.length()-posisi[0][0]+nomor.length()-posisi[5][0];
				jwb=min(tmp,jwb);
			}
			hitung++;
		}
		if(data[2]>0&&data[5]>0){
			if(posisi[5][0]==1&&nomor[1]=='0')sem=1;
			
				if(posisi[2][0]<posisi[5][0]){
					tmp=nomor.length()-posisi[2][0]+nomor.length()-posisi[5][0]-1;
					jwb=min(jwb,tmp);
				}
				else{
					tmp=nomor.length()-posisi[2][0]+nomor.length()-posisi[5][0]+sem;
				 	jwb=min(jwb,tmp);
				}
			sem=0;
			hitung++;
		}
		if(data[7]>0&&data[5]>0){
			if(posisi[5][0]==1&&nomor[1]=='0'){
				sem=1;
			}
			
			
				if(posisi[7][0]<posisi[5][0]){
					tmp=nomor.length()-posisi[7][0]+nomor.length()-posisi[5][0]-1;
			
					jwb=min(jwb,tmp);
				}
				else {
					tmp=nomor.length()-posisi[7][0]+nomor.length()-posisi[5][0]+sem;
					jwb=min(jwb,tmp);
				}
				sem=0;
				hitung++;
		}

		if(hitung==2)break;
	}
	if(hitung>0){
		cout<<jwb<<endl;
		return 0;
	}
	cout<<"-1\n";
}
