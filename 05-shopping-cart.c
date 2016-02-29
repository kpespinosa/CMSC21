#include <stdio.h>

// int, int, int -> float
// Computes the total cost of items in a shopping cart: balls at 400 each, net
// at 1000 each, jerseys at 600 each.

/* stub
float totalCost(int balls, int nets, int jerseys) {
  return 0.0;
}
*/

#define PRICE_BALL 400
#define PRICE_NET 1000
#define PRICE_JERSEY 600

/* template
float totalCost(int balls, int nets, int jerseys) {
  return ... balls nets jerseys PRICE_BALL PRICE_NET PRICE_JERSEY;
}
*/

float totalCost(int balls, int nets, int jerseys) {
  return (balls * PRICE_BALL) + (nets * PRICE_NET) + (jerseys * PRICE_JERSEY);
}

int main() {
  printf("%f == 400\n", totalCost(1, 0, 0));
  printf("%f == 1000\n", totalCost(0, 1, 0));
  printf("%f == 600\n", totalCost(0, 0, 1));
  printf("%f == 2000\n", totalCost(1, 1, 1));
  printf("%f == 4000\n", totalCost(2, 2, 2));
  return 0;
}
