#include<bits/stdc++.h>

#define mod (10000000 + 7)
//int16		: 3(4)
//int32		: 2(9)
//int64		: 9(18)
//int128	: 1(38)
using namespace std;

void solve() {
	long long int N,A,B;
	long long int P=0,Q=0;
	cin>>N>>A>>B;
	string s;
	int i=0;
	while(N--) {
		cin>>s;
		if(s[i] == 'E' || s[i] == 'Q' || s[i] == 'U' || s[i] == 'I' || s[i] == 'N' || s[i] == 'O' || s[i] == 'X') {
			P += A;
		}
		else {
			Q += B;
		}
	}
	if(P > Q) {
		cout<<"SARTHAK\n";
	}
	else {
		if(P < Q) {
			cout<<"ANURADHA\n";
		}
		else {
			cout<<"DRAW\n";
		}
	}
}

int main() {
	//ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int testcase;
	cin>>testcase;
	while(testcase--) {
		solve();
	}
}
