#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

void solve(int t) {
	while (t--) {
		int n; cin>>n;
		int arr[n];
		for (int i=0;i<n;i++) {
			cin>>arr[i];
		}
		int min_idx = 0, max_idx = 0;
		for(int i=0;i<n;i++) {
			if (arr[i] > arr[max_idx]) {
				max_idx = i;
			}
			if (arr[i] < arr[min_idx]) {
				min_idx = i;
			}
		}
		swap(arr[min_idx], arr[max_idx]);
		// int temp = arr[min_idx];
		// arr[min_idx] = arr[max_idx];
		// arr[max_idx] = temp;
		
		for (int i=0;i<n;i++) {
			cout<<arr[i]<<' ';
		}cout<<'\n';		
	}
}

int main() {
	FAST_IO;
	int t = 1; 
	cin>>t;
	solve(t);
}