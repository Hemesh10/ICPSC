#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

const int mod = 1000000007;

long long binpow(long long a, long long b) {
    long long res = 1;
    a = a%mod;
    while (b > 0) {
        if (b & 1) res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res;
}

// n(n-3) / 2

void solve(int t) {
	while (t--) {
		long long result = ((n%mod) * ((n-3)%mod))%mod;
		result = ((result%mod) * (binpow(2, mod-2)%mod))%mod;
    	cout<<((result%mod)+mod)%mod<<'\n';
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