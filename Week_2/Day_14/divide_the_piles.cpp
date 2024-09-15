#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n; cin>>n;
		int gcd; cin>>gcd;
		for (int i=1;i<n;i++) {
			int x; cin>>x;
			gcd=__gcd(gcd, x);
		}	
		cout<<(gcd>=2?"Yes":"No")<<'\n';
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