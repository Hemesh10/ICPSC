#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n, m;
		cin>>n>>m;
		int arr[n][m];
		for (int i=0;i<n;i++) {
			for (int j=0;j<m;j++) {
				cin>>arr[i][j];
			}
		}
		int x; cin>>x;
		bool flag = false;
		for (int i=0;i<n;i++) {
			for (int j=0;j<m;j++) {
				if (arr[i][j] == x) {
					flag = true;
					break;
				}
			}
			if (flag) break;
		}
		cout<<(flag?"will not take the number":"will take the number")<<'\n';
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