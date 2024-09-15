#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void reverse(string &str, int low, int high) {
	while (low<high) {
		char temp = str[low];
		str[low] = str[high];
		str[high] = temp;
		low++;
		high--;
	}
}

void solve(int t) {
	while (t--) {
		string str; getline(cin, str);
		int n = str.length();
		int low = 0, high = 1;
		while (high<n) {
			if (str[high]==' ') {
				reverse(str, low, high-1);
				low = ++high;
			}
			high++;
		}		reverse(str, low, high-1);
		cout<<str<<'\n';
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