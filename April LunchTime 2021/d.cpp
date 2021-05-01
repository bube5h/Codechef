#include<bits/stdc++.h>

#define mod (1000000000 + 7)
//int16		: 3(4)
//int32		: 2(9)
//int64		: 9(18)
//int128	: 1(38)
using namespace std;

int main() {
	//ios_base::sync_with_stdio(false);cin.tie(nullptr);
	long long int N=0,Q=0;
	long long int sm = 0;
	long long q=0;
	cin>>N;
	long long temp=0;
	for(long long int i=0;i<N;++i) {
		cin>>temp;
	    sm = sm + temp;
		sm = ((sm%mod));
		if(sm < 0 ) sm = sm + mod;
	}
	cin>>Q;
	for(long long int i=0;i<Q;++i) {
		cin>>q;
		sm += sm; 
		sm = ((sm%mod) + mod)%mod;
		cout<<sm<<"\n";
	}
}