#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n; cin>>n;
		int result=0;
		for (int i=1;i*i<=n;i++) {
			if (n%i==0) {
				result++;
				if (i*i!=n) result++;
			}
}
		cout<<result<<'\n';
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