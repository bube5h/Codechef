#include<bits/stdc++.h>

#define mod (10000000 + 7)
//int16		: 3(4)
//int32		: 2(9)
//int64		: 9(18)
//int128	: 1(38)
using namespace std;

void solve() {
	long int L;
	char c;
	long zero=0,one=0;
	cin>>L;
    string s;
	cin>>s;
	bool answer = false;
	for(int i=0;i<L;++i) {
		if(s[i] == '0') zero++;
		else one++;
		if(zero == one) {
			cout<<"YES\n";
			return;
		}
		if(one > zero) {
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int testcase;
	cin>>testcase;
	while(testcase--) {
		solve();
	}
}
