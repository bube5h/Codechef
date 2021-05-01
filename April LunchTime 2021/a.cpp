#include<bits/stdc++.h>

#define mod (10000000 + 7)
//int16		: 3(4)
//int32		: 2(9)
//int64		: 9(18)
//int128	: 1(38)
using namespace std;

int solve() {
	int t,s;
	cin>>t>>s;
	if(s>t) return 0;
	int temp = t/s;
	return temp;
}

int main() {
	//ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int testcase;
	cin>>testcase;
	while(testcase--) {
		cout<<solve();
	}
}
