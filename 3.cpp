//Prime Factorization: Brute Force Approach
/* The brute force approach to prime factorization involves checking every integer from 2 up to the number n itself to see if it is a factor. This method does not use any precomputed list of prime numbers and checks divisibility directly.*/


#include <iostream>
#include <vector>
using namespace std;

vector<int> primeFactorization(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {  // Check divisors from 2 up to the square root of n
        while (n % i == 0) {  // If i is a factor, divide n by i and store i in factors
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n);  // If n is still greater than 1, it is a prime factor
    return factors;
}

int main() {
    int n;
    cout << "Enter a number to factorize: ";
    cin >> n;
    vector<int> factors = primeFactorization(n);
    cout << "Prime factors of " << n << " are: ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
    return 0;
}
