#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		vector<int> freqMap(26);
		string str; cin>>str;
		for (char ch:str) {
			freqMap[ch-'a']++;
		}
		for (int i=0;i<26;i++) {
			if(freqMap[i]) {
				cout<<char(i+97)<<" : "<<freqMap[i]<<'\n';
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
	// cin>>t;
	solve(t);
}