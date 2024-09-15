#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n; cin>>n;
		int mat[n][n];
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				cin>>mat[i][j];
			}
		}
		
		int left=0, right=n-1, d1=0, d2=0;
		for (int i=0;i<n;i++) {
			d1 += mat[i][left++];
			d2 += mat[i][right--];
		}
		cout<<abs(d1-d2)<<'\n';
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