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
		deque<int> dq;
		int q; cin>>q;
		while(q--) {
			string query; cin>>query;
			if(query=="insertback" || query=="insertfront" || query=="print") {
				int x; cin>>x;
				if(query=="insertback") dq.PB(x);
				else if(query=="insertfront") dq.push_front(x);
				else cout<<dq[x]<<'\n';
			} else if(query=="printfront") {
				cout<<(dq.empty()?0:dq.front())<<'\n';
			} else if(query=="printback") {
				cout<<(dq.empty()?0:dq.back())<<'\n';
			} else if(!dq.empty()) {
				if(query=="eraseback") {
					dq.pop_back();
				} else dq.pop_front();
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