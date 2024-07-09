#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> primes;

bool isPr[1000001];

void sieve() {
    int maxN = 1000000;
    fill(begin(isPr), end(isPr), true);  // Initialize all entries as true (indicating prime)
    isPr[0] = isPr[1] = false;  // 0 and 1 are not prime numbers

    for (int i = 2; i * i <= maxN; i++) {
        if (isPr[i]) {
            for (int j = i * i; j <= maxN; j += i) {
                isPr[j] = false;  // Mark multiples of i as not prime
            }
        }
    }

    for (int i = 2; i <= maxN; i++) {
        if (isPr[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    int q, n;
    cin >> q;
    sieve();
    while (q--) {
        cin >> n;
        cout << primes[n - 1] << endl;  // Access nth prime (1-based index)
    }
}


/*
Input: An integer maxN
Output: A list of prime numbers up to maxN

1. Create a boolean array isPr[] of size maxN + 1
2. Initialize all elements of isPr[] to true
3. Set isPr[0] and isPr[1] to false
4. For i from 2 to sqrt(maxN):
     a. If isPr[i] is true:
        i. For j from i*i to maxN, step by i:
           1. Set isPr[j] to false
5. Collect all indices i where isPr[i] is true into a list primes
6. Return the list primes
*/
