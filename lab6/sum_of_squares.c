#include <stdio.h>
#include <math.h>
#include <assert.h>
/* Given a positive integer n, write n as a sum of k squares,
where k <= 4, that is, n = a1^2 + ... + ak^2, making k 
as small as possible.
*/
void sum_of_squares(int n, int* k, int* list) {
  
}
void TestCase1() {
  // Test Case 1: 99999 (315^2 + 27^2 + 6^2 + 3^2)
  int k ;
  int list[4] ;
  sum_of_squares(99999, &k, list);
  assert(k == 4);
  assert(list[0] == 315);
  assert(list[1] == 27);
  assert(list[2] == 6);
  assert(list[3] == 3);
  printf("Passed TestCase1\n");
}

void TestCase2() {
  // Test Case 1: 87352 (294^2 + 30^2 + 4^2 )
  int k ;
  int list[4] ;
  sum_of_squares(87352, &k, list);
  assert(k == 3);
  assert(list[0] == 294);
  assert(list[1] == 30);
  assert(list[2] == 4);
  printf("Passed TestCase2\n");
}

void TestCase3() {
  // Test Case 3: 76543 (275^2 + 30^2 + 3^2 + 3^2)
  int k ;
  int list[4] ;
  sum_of_squares(57, &k, list);
  assert(k == 4);
  assert(list[0] == 6);
  assert(list[1] == 4);
  assert(list[2] == 2);
  assert(list[3] == 1);
  printf("Passed TestCase3\n");
}

int main() {
  TestCase1();
  TestCase2();
  TestCase3();
  return 0;
}