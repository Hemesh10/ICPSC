#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n, q;
		cin>>n>>q;
		string str; cin>>str;
		while (q--) {
			string query; cin>>query;
			if (query == "front" || query == "back") {
				cout<<(query=="front"?str[0]:str[n-1])<<'\n';
			} else if (query == "pop_back" || query == "push_back") {
				if (query == "push_back") {
					char ch; cin>>ch;
					str.push_back(ch);
					n++;
				} else {
					str.pop_back();
					n--;
				}
			} else if (query == "sort" || query == "reverse" || query == "substr") {
				int l, r; cin>>l>>r;
				if (l>r) swap(l, r);
				if (query == "sort") {
					sort(str.begin()+(l-1), str.begin()+r);
				} else if (query == "reverse") {
					reverse(str.begin()+(l-1), str.begin()+r);
				} else {
					cout<<str.substr(l-1, r-l+1)<<'\n';
				}
			} else {
				int pos; cin>>pos;
				cout<<str[--pos]<<'\n';
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