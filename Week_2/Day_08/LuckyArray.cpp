#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n; cin>>n;
		int arr[n];
		for (int i=0;i<n;i++) {
			cin>>arr[i];
		}
		int minN = INT_MAX;
		for (int i=0;i<n;i++) {
			minN = min(minN, arr[i]);
		}
		int min_freq = 0;
		for (int i=0;i<n;i++) {
			min_freq += arr[i]==minN?1:0;
		}
		cout<<(min_freq&1?"Lucky":"Unlucky")<<'\n';
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