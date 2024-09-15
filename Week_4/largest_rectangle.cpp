#include <bits/stdc++.h>
#include <time.h> 
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
		
		int pse[n]={0}, nse[n]={0};
		stack<int> st;
		for(int i=0;i<n;i++) {
			while(!st.empty() && arr[i]<=arr[st.top()]) {
				st.pop();
			}
			pse[i] = st.empty()?-1:st.top();
			st.push(i);
		}
		
		while(!st.empty()) st.pop(); 
		
		for(int i=n-1;i>=0;i--) {
			while(!st.empty() && arr[i]<=arr[st.top()]) {
				st.pop();
			}
			nse[i] = st.empty()?n:st.top();
			st.push(i);
		}
		
		ll maxArea = 0;
		for(int i=0;i<n;i++) {
			ll height = arr[i], width = nse[i]-pse[i]-1;
			maxArea = max(maxArea, height*width);
		}
		cout<<maxArea<<'\n';
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