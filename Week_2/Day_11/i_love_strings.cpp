#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		string str1, str2;
		cin>>str1>>str2;
		int n1 = str1.length(), n2 = str2.length();
		
		string result = "";
		int i = 0, j = 0;
		do {
			if (i<n1) result += str1[i++];
			if (j<n2) result += str2[j++];
		} while (i<n1 || j<n2);
		
		cout<<result<<'\n';
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