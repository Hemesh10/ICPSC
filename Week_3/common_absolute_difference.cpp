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
		map<ll, ll> mp;
		ll result=0;
		for(int i=0;i<n;i++) {
			int x; cin>>x;
			ll n1=x-k, n2=x+k;
			if(n1) {
				auto it=mp.find(n1);
				if(it!=mp.end()) result+=it->S;
			}
			if(k&&n2) { //this will make sure to work properly even if k is 0
				auto it=mp.find(n2);
				if(it!=mp.end()) result+=it->S;
			}
			mp[x]++;
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