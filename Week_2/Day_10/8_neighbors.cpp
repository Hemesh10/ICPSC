#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n, m;
		cin>>n>>m;
		char cells[n][m];
		for (int i=0;i<n;i++) {
			for (int j=0;j<m;j++) {
				cin>>cells[i][j];
			}
		}
		int p1, p2;
		cin>>p1>>p2;
		p1--;
		p2--;
		
		bool flag = true;
		for (int i=p1-1;i<=p1+1;i++) {
			// cout<<"i: "<<i<<'\n';
			for (int j=p2-1;j<=p2+1;j++) {
				if ((i>=0 && i<n && j>=0 && j<m) && !(i==p1 && j==p2)) {
				// cout<<"j: "<<j<<'\n';
					if (cells[i][j] == '.') {
						flag = false;
						break;
					}
				}
			}
			if (!flag) break;

		}
		
		cout<<(flag?"yes":"no")<<'\n';
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