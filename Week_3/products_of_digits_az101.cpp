#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

const int mod = 1000000007;

void solve(int t) {
	while (t--) {
		int n; cin>>n;
		long long product=1;
		bool flag = true;
		while (n--) {
			int d; cin>>d;
			product = ((product%mod) * (d%mod))%mod;
		}
		cout<<(flag?product%mod:0)<<'\n';
	}
}

int main() {
	FAST_IO;
#ifndef ONLINE_JUDGE
    (void)!freopen("error.txt", "w", stderr);
#endif
	int t = 1; 
	cin>>t;
	solve(t);
}