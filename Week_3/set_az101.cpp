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
		set<int> st;
		while(q--) {
			string query; cin>>query;
			if(query=="add" || query=="find" || query=="erase") {
				int x; cin>>x;
				if(query=="add") st.insert(x);
				else {
					auto it = st.find(x);
					if(query=="find") {
						cout<<(it==st.end()?"NO":"YES")<<'\n';
					} else if(it!=st.end()) {
						st.erase(it);
					}
				}
			} else if(query=="print") {
				for(auto& it:st) cout<<it<<' ';
				cout<<'\n';
			} else st.clear();
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