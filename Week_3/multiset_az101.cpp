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
		multiset<int> mst;
		while(q--) {
			string query; cin>>query;
			if(query=="print") {
				for(auto &it:mst) {
					cout<<it<<' ';
				} cout<<'\n';
			} else if(query=="empty") {
				mst.clear();
			} else {
				int x; cin>>x;
				if(query=="add") mst.insert(x);
				else if(query=="count" && !mst.empty()) cout<<mst.count(x)<<'\n';
				else if(query=="find" || query=="erase") {
					auto it = mst.find(x);
					if(query=="find") {
						cout<<(it==mst.end()?"NO":"YES")<<'\n';
					} else if(it!=mst.end()) mst.erase(it);
				} else mst.erase(x);
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