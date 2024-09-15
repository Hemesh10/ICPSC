#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)

const int mod = 1000000007;
const long long mod2 = 500000004;

// Your code (the one that's not getting accepted)
long long binpow(long long a, long long b) {
    long long res = 1;
    a = a%mod;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

long long solve_problem(int n) {
		long long result = ((n%mod) * ((n-3)%mod))%mod;
		result = ((result%mod) * (binpow(2, mod-2)%mod))%mod;
    return ((result%mod)+mod)%mod;
}

// Correct code (the one that's getting accepted)
long long correct_solution(int n) {
    long long mi=(n*(n-3))%mod;
    long long op=(mi*mod2)%mod;
    return ((op%mod)+mod)%mod;
}

// Stress test
void stress_test(int max_n) {
    srand(time(0)); // Seed for random number generation
    for (int i = 0; i < 100000; i++) { // Adjust the number of tests as needed
        int n = rand() % max_n + 3; // Generate random n within range [3, max_n]
        
        long long res1 = solve_problem(n);
        long long res2 = correct_solution(n);
        
        if (res1 != res2) {
            cout << "Mismatch found!\n";
            cout << "n: " << n << '\n';
            cout << "Your solution: " << res1 << '\n';
            cout << "Correct solution: " << res2 << '\n';
            return;
        }
    }
    cout << "All test cases passed!" << endl;
}

int main() {
    FAST_IO;
    int max_n = 1000000000; // Set the maximum value of n
    stress_test(max_n);
    return 0;
}
