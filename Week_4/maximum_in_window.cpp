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
		int arr[n];
		for(int i=0;i<n;i++) {
			cin>>arr[i];
		}
		// multiset<int> mst;
		// for(int i=0;i<n;i++) {
		// 	mst.insert(arr[i]);
		// 	if(i>=k) {
		// 		mst.erase(mst.find(arr[i-k]));
		// 	}
		// 	if(i>=k-1) {cout<<*mst.begin()<<'\n';}
		// }
		
		deque<int> dq;
		for(int i=0;i<n;i++) {
			while(!dq.empty() && arr[i]<dq.back()) {
				dq.pop_back();
			}
			dq.push_back(arr[i]);
			if(i>=k && arr[i-k]==dq.front()) dq.pop_front();
			if(i>=k-1) cout<<dq.front()<<'\n';
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