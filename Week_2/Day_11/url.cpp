#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		string url; cin>>url;
		int n = url.length();
		
		vector<string> keys;
		for (int i=0;i<n;i++) {
			if (url[i] == '=') {
				++i;
				string key = "";
				while (true) {
					key += url[i];
					if (i+1==n || url[i+1]=='&') break;
					++i;
				}
				keys.push_back(key);
			}
		}
		
		for (int i=0;i<5;i++) {
			switch (i) {
				case 0:
					cout<<"username: ";
					break;
				case 1:
					cout<<"pwd: ";
					break;
				case 2:
					cout<<"profile: ";
					break;
				case 3:
					cout<<"role: ";
					break;
				default:
					cout<<"key: ";
			}
			cout<<keys[i]<<'\n';
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