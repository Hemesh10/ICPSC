#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const int MOD = 1e9+7;
const long long INF = 1e18;
const double PI = 3.1415926535897932384626;
const int N = 1000001;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)
#define ALL(x) (x).begin(), (x).end()
#define PB push_back
#define MP make_pair
#define F first
#define S second 

int prime_factors[N];
void precompute() {
	map<int, vector<int>> mp;
	for(int i=2;i<N;i++) {
		if(!prime_factors[i]) {
			prime_factors[i]++;
			for(int j=i*2;j<N;j+=i) {
				prime_factors[j]++;
			}
		}
	}
	// for(auto &it:mp) {
	// 	cerr<<it.F<<" : ";
	// 	for(auto &i:it.S) {
	// 		cerr<<i<<", ";
	// 	}
	// 	cerr<<'\n';
	// }
}

void solve(int t) {
	precompute();
	map<int, vector<int>> mp;
	for(int i=1;i<N;i++) {
		mp[prime_factors[i]].PB(i);
	}
	while (t--) {
		int a, b, n; cin>>a>>b>>n;
		auto it = mp.find(n);
		int result = upper_bound(it->S.begin(), it->S.end(), b) - lower_bound(it->S.begin(), it->S.end(), a);
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