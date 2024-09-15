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
		int c=n*2-1;
		for(int i=0;i<n;i++) {
			int x=1;
			bool flag=true;
			for(int j=0;j<c;j++) {
				if(i+j>=c/2 && i>=j-c/2) {
					cout<<x<<' ';
					if(flag && x<i+1) {
						x++;
					} else {
						flag=false;
						x--;
					}
				} else {
					cout<<"  ";
				}
			}
			cout<<'\n';
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