#include <stdio.h>
#include <assert.h>
/*
Goldbach's conjecture states that every even natural
number greater than 2 is the sum of two prime numbers.

Given an even natural number greater than 2, find two
primes (*prime1) and (*prime2) such that
n = (*prime1) + (*prime2).
*/
void sum_of_two_primes(int n, int* prime1, int* prime2) {

}


    

    
void TestCase1() {
  // Test case 1: 10 = 3 + 7
  int prime1, prime2;
  sum_of_two_primes(10, &prime1, &prime2);
  assert((prime1 == 3 && prime2 == 7) || (prime1 == 7 && prime2 == 3));
  printf("Passed TestCase1\n");
}

void TestCase2() {
  // Test case 2: 28 = 11 + 17
  int prime1, prime2;
  sum_of_two_primes(28, &prime1, &prime2);
  assert((prime1 == 11 && prime2 == 17) || (prime1 == 17 && prime2 == 11));
  printf("Passed TestCase2\n");
}

void TestCase3() {
  // Test case 3: 56 = 19 + 37
  int prime1, prime2;
  sum_of_two_primes(56, &prime1, &prime2);
  assert((prime1 == 19 && prime2 == 37) || (prime1 == 37 && prime2 == 19));
  printf("Passed TestCase3\n");
}

int main() {
  TestCase1();
  TestCase2();
  TestCase3();
  return 0;
}