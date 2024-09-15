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

void solve(int t) #include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define deb1(x) cout << #x << "=" << x << '\n'
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << '\n'
#define deb3(x, y, z) cout << #x << "=" << x << ", " << #y << "=" << y << ", " << #z << "=" << z << '\n'
#define PI 3.1415926535897932384626
const int mod = 1e9 + 7;
…    cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    (void)!freopen("Input.txt", "r", stdin);
    (void)!freopen("Output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    solve(t);
    return 0;
}{
	while (t--) {
		int n; cin>>n;
		priority_queue<int> pq;
		while(n--) {
			string query; cin>>query;
			if(query=="add") {
				int x; cin>>x;
				pq.emplace(x);
			} else if(query=="print") {
				cout<<(pq.empty()?0:pq.top())<<'\n';
			} else if(!pq.empty()) {
				pq.pop();
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