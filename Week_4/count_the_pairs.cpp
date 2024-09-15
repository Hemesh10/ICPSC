#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const int MOD = 1e9+7;
const long long INF = 1e18;
const double PI = 3.1415926535897932384626;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)
#define ALL(x) (x).begin(), (x).end()
#define PB push_back
#define MP make_pair
#define F first
#define S second 

void solve(int t) {
	while (t--) {
		int n, k; cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++) {
			cin>>arr[i];
		}
		
		map<int, int> mp;
		long long result=0;
		
		// Time Complexity - O(n^2)
		// for(int i=0;i<n;i++) {
		// 	int x = k-arr[i];
		// 	for(auto it:mp) {
		// 		if(it.F>x) break;
		// 		result+=it.S;
		// 	}
		// 	mp[arr[i]]++;
		// }
		
		
		// Time Complexity - O(nlogn)
		sort(arr, arr+n);
		for(int i=0;i<n;i++) {
			int j = upper_bound(arr, arr+n, k-arr[i]) - arr;
			if(arr[i]<=k-arr[i]) j--; 
			// The above condidtion make sure that ek he index wale element ka pair add up na ho
			result += j;
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