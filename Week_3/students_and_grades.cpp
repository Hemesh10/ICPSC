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
		set<ll> marks;
		while(n--) {
			ll x; cin>>x;
			marks.insert(x);
		}
		while(m--) {
			ll x; cin>>x;
			auto it = marks.find(x);
			if(it!=marks.end()) {
				cout<<"YES"<<'\n';
			} else {
				cout<<"NO"<<'\n';
				marks.insert(x);
			}
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