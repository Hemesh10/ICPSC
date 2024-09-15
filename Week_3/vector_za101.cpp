#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		vector<int> v;
		int q; cin>>q;
		while (q--) {
			string query; cin>>query;
			if (query=="add" || query=="print") {
				int x; cin>>x;
				if (query=="add") {
					v.push_back(x);
				} else  {
					cout<<(x<v.size()?v[x]:0)<<'\n';
				}
			} else if (query=="remove" && !v.empty()) {
				v.pop_back();
			} else v.clear();
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