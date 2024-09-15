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
		int n,k; cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++) {
			cin>>arr[i];
			if(i) arr[i] += arr[i-1];
		}
		
		for(int i=0;i<n;i++) {
			cerr<<arr[i]<<' ';
		} cerr<<'\n';
		
		map<int, int> mp;
		mp[0]++;
		int result=0;
		for(int i=0;i<n;i++) {
			int x = arr[i]-k;
			auto it = mp.find(x);
			if(it!=mp.end()) {
				result+=it->S;
			}
			mp[arr[i]]++;
		}
		for(auto it:mp) cerr<<it.F<<": "<<it.S<<'\n';
	
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