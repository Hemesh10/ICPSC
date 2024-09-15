#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n; cin>>n;
		string str; cin>>str;
		
		int score=0;
		for (int i=0;i<str.length();i++) {
			if (!str[i]) continue;
			if (str[i] == 'V') {
				score += 5;
			} else if (str[i] == 'W') {
				score += 2;
			} else if (i!=str.length()-1) {
				if (str[i] == 'X') {
					str[i+1] = ' ';
				} else if (str[i]=='Y') {
					str.push_back(str[i+1]);
					str[i+1] = ' ';
				} else if (str[i] == 'Z' && (str[i+1] == 'V' || str[i+1] == 'W')) {
					score /= str[i+1]=='V'?5:2;
					str[i+1] = ' ';
				}
			}
		}	
		cout<<score<<'\n';
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