#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n; cin>>n;
		int A[n], B[n];
		for(int i=0;i<n;i++) cin>>A[i];
		for(int i=0;i<n;i++) cin>>B[i];
		bool flag = true;
			
		// sort(A, A+n);
		// sort(B, B+n);	
		// for(int i=0;i<n;i++) {
		// 	if (A[i] != B[i]) {
		// 		flag = false;
		// 		break;
		// 	}
		// }
		
		unordered_map<int,int> mp;
		for (int i=0;i<n;i++) {
			auto it = mp.find(A[i]);
			if (it != mp.end()) {
				it->second++;
			}else{
				mp.insert({A[i], 1});
			}
		}
		
		for (int i=0;i<n;i++) {
			auto it = mp.find(B[i]);
			if (it != mp.end()) {
				it->second--;
				if (!it->second){
					mp.erase(it);
				}
			}else{
				flag = false;
				break;
			}
		}
		
		cout<<(flag?"yes":"no")<<'\n';
		
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