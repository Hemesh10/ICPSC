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
		int n; cin>>n;
		priority_queue<ll> pq;
		while(n--) {
			int x; cin>>x;
			pq.emplace(-x);
		}
		ll total_cost=0;
		while(pq.size()>1) {
			ll n1=-pq.top();
			pq.pop();
			ll n2=-pq.top();
			pq.pop();
			pq.emplace(-(n1+n2));
			total_cost+=(n1+n2);
		}
		cout<<total_cost<<'\n';
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