#include <iostream>

using namespace std;

// Function to compute phi(n)
int compute_phi(int p, int q) { return (p - 1) * (q - 1); }

// Function to find modular inverse of e under modulo phi
int modular_inverse(int e, int phi) {
  for (int d = 2; d < phi; d++) {
    if ((d * e) % phi == 1)
      return d;
  }
  return -1; // Should not happen if e and phi are coprime
}

// Function for modular exponentiation. It ensures to avoid overflow for large
// numbers
int modular_exponentiation(int base, int exp, int mod) {
  int result = 1;
  base = base % mod; // Update base if it is more than the mod

  while (exp > 0) {
    // If exp is odd, multiply the base with result
    if (exp % 2 == 1)
      result = (result * base) % mod;

    // Right shift the exp by 1 and square the base
    exp = exp >> 1;
    base = (base * base) % mod;
  }
  return result;
}

int main() {
  int p = 13;
  int q = 29;
  int n = p * q;
  int e = 11;
  int phi = compute_phi(p, q);
  int d = modular_inverse(e, phi);
  int M = 23;
  int C = modular_exponentiation(M, e, n);
  int M_prime = modular_exponentiation(C, d, n);

  cout << "p = " << p << endl;
  cout << "q = " << q << endl;
  cout << "n = " << n << endl;
  cout << "Phi(n) = " << phi << endl;
  cout << "e = " << e << endl;
  cout << "d = " << d << endl;
  cout << "M (original message) = " << M << endl;
  cout << "C (ciphertext) = " << C << endl;
  cout << "M' (decrypted message) = " << M_prime << endl;

  return 0;
}
