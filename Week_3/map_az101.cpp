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
		int q; cin>>q;
		map<string, int> mp;
		while(q--) {
			string query; cin>>query;
			if(query=="add") {
				string x;
				int y;
				cin>>x>>y;
				mp[x]=y;
			} else {
				string x; cin>>x;
				auto it = mp.find(x);
				if(query=="erase" && it!=mp.end()) {
					mp.erase(it);
				} else {
					cout<<(it!=mp.end()?it->S:0)<<'\n';
				}
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

