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
		int arr[n];
		for(int i=0;i<n;i++) {
			cin>>arr[i];
		}
		int p_fge[n]={0}, n_fge[n]={0};
		
		cout<<"Hello, Hemesh!"<<'\n';
		
		int furthest_largest_index = 0;
		for(int i=0;i<n;i++) {
			if(arr[furthest_largest_index]>arr[i]) {
				p_fge[i] = furthest_largest_index;
			} else {
				p_fge[i] = -1;
			}
			if(arr[i]>arr[furthest_largest_index]) furthest_largest_index = i;
		} 
		
		furthest_largest_index = n-1;
		for(int i=n-1;i>=0;i--) {
			if(arr[furthest_largest_index]>arr[i]) {
				n_fge[i] = furthest_largest_index;
			} else {
				n_fge[i] = -1;
			}
			if(arr[i]>arr[furthest_largest_index]) furthest_largest_index = i;
		} 		
		
		ll total=0;
		for(int i=0;i<n;i++) {
			if(p_fge[i]==-1 || n_fge[i]==-1) continue;
			total+=min(arr[p_fge[i]],arr[n_fge[i]])-arr[i];
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