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
		int n, m; cin>>n>>m;
		ll A[n], B[m];
		for(int i=0;i<n;i++) {
			cin>>A[i];
		}
		for(int i=0;i<m;i++) {
			cin>>B[i];
		}
		sort(A, A+n);
		ll constant_gcd=0;
		for(int i=0;i<n;i++) {
			constant_gcd = __gcd(constant_gcd, A[i]-A[0]);
		}
		cerr<<constant_gcd<<'\n';
		for(int i=0;i<m;i++) {
			cout<<__gcd(A[0]+B[i], constant_gcd)<<' ';
		}
		cout<<'\n';
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