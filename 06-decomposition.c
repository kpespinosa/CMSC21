#include <stdio.h>


#define PRICE_RED 0.22
#define PRICE_BLUE 0.33
#define PRICE_THREAD 0.14
#define MIN_THREAD 24

// int, int -> float
// Computes the total cost of beads
// for a necklace, given the number of 
// red and blue beads
float beadsCost(int red, int blue) {
  return red * PRICE_RED + blue * PRICE_BLUE;
}

// int -> float
// Computes the total cost of thread 
// for a necklace, given the length
// in inches
float threadCost(int length) {
  if (length < MIN_THREAD) {
    return MIN_THREAD * PRICE_THREAD;
  } else {
    return length * PRICE_THREAD;
  }
}

// int, int, int -> float
// Computes the total cost of materials
// for a necklace, given the number of rea
// and blue beads and the length of thread
// in inches

/* stub
float totalCost(int red, int blue, int length) {
  return 0.0;
}
*/
/* template
float totalCost(int red, int blue, int length) {
  return ... red blue length PRICE_RED PRICE_BLUE PRICE_THREAD MIN_THREAD
}
*/

float totalCost(int red, int blue, int length) {
  return beadsCost(red, blue) + threadCost(length);
}

int main() {
  printf("%f == %f\n", 20 * 0.22 + 14 * 0.33, beadsCost(20, 14));
  printf("%f == %f\n", 24 * 0.14, threadCost(24));
  printf("%f == %f\n", 24 * 0.14, threadCost(20));
  printf("%f == %f\n", 30 * 0.14, threadCost(30));
  printf("%f == %f\n", 24 * 0.14, threadCost(23));
  printf("%f == %f\n", 25 * 0.14, threadCost(25));
  printf("%f == %f\n", 20 * 0.22 + 14 * 0.33 + 24 * 0.14, totalCost(20, 14, 24));
  printf("%f == %f\n", 20 * 0.22 + 14 * 0.33 + 24 * 0.14, totalCost(20, 14, 20));
  printf("%f == %f\n", 20 * 0.22 + 14 * 0.33 + 30 * 0.14, totalCost(20, 14, 30));
  return 0;
}
