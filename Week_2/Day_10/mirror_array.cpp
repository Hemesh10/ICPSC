#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n, m;
		cin>>n>>m;
		int mat[n][m];
		for (int i=0;i<n;i++) {
			for (int j=0;j<m;j++) {
				cin>>mat[i][j];
			}
		}
		for (int i=0;i<n;i++) {
			for (int j=m-1;j>=0;j--) {
				cout<<mat[i][j]<<' ';
			} cout<<'\n';
		}
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