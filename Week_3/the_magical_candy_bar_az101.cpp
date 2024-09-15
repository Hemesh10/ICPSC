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
		priority_queue<int> pq;
		while(n--) {
			int x; cin>>x;
			pq.emplace(x);
		}
		ll total=0;
		while(k-- && !pq.empty()) {
			int temp = pq.top();
			total+=temp;
			pq.pop();
			pq.emplace(temp/2);
		}
		cout<<total<<'\n';
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