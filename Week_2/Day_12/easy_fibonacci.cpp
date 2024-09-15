#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n; cin>>n;
		if (n==1) {
			cout<<0<<'\n';
			return;
		}
		int a = 0, b = 1;
		cout<<a<<" "<<b;
		for (int i=0;i<n-2;i++) {
			int c = a+b;
			a=b;
			b=c;
			cout<<" "<<c;
		}
	}
}

int main() {
	FAST_IO;
#ifndef ONLINE_JUDGE
    (void)!freopen("error.txt", "w", stderr);
#endif
	int t = 1; 
	// cin>>t;
	solve(t);
}