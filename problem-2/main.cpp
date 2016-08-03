/* Project Euler Problem 2
 * Compute the sum of the even fibonacci numbers less than 4 million. */

#include <iostream>

uint32_t evenFib()
{
  uint32_t result(0);
  uint32_t fib1(1);
  uint32_t fib2(1);
  uint32_t temp(0);

  while(fib2 < 4000000)
  {
    temp = fib2;
    fib2 = fib1 + fib2;
    fib1 = temp;
    if (fib2 % 2 == 0)
      result += fib2;
  }
  return result;
}

int main()
{
  std::cout << "even fibonacci numbers: " << evenFib() << std::endl;

	return 0;
}
