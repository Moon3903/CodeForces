#include<bits/stdc++.h>
using namespace std;

int kasus,sampai,ok,hai,tmp;
int arr[1005];

int main(){
	cin>>sampai;
	for(kasus=0;kasus<sampai;kasus++){
		cin>>arr[kasus];
	}
	sort(arr,arr+sampai);
	ok=sampai-1;
	hai=0;
	while(hai!=ok&&hai!=ok-1){
		hai++;
		ok--;
	}
	cout<<arr[hai]<<endl;
}
