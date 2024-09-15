#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n; cin>>n;
        if (n==1) {
            cout<<"NO"<<'\n';
            continue;
        }
		bool is_prime = true;
		for (long long i=2;i*i<=n;i++) {
			if (n%i==0) {
				is_prime=false;
				break;
			}
		}
		cout<<(is_prime?"YES":"NO")<<'\n';
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