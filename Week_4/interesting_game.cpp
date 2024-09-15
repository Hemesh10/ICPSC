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
		pii cards[n];
		for(int i=0;i<n*2;i++) {
			if(i<n) cin>>cards[i].F;
			else cin>>cards[i-n].S;
		}
		
		sort(cards, cards+n, [](pii &a, pii &b) {
			return a.F+a.S>b.F+b.S;
		});
		
		ll src1=0, src2=0;
		for(int i=0;i<n;i++) {
			if(i&1) src2+=cards[i].S;
			else src1+=cards[i].F;
		}
		
		cout<<(src1==src2?"Tie":(src1>src2?"Alice":"Bob"))<<'\n';		
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