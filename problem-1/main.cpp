/* Project Euler Problem 1
 * Find the sum of all the multiples of 3 or 5 below 1000. */

#include <iostream>
#include <vector>
#include <numeric>

using std::vector;
using std::accumulate;

uint32_t computeMultiples(uint16_t max)
{
	int result(0);
	for (int i = 1; i < max; i++)
	{
	  if ((i % 3 == 0) || (i % 5 == 0))
	  {
	    result += i;
	  }
	}
	
	return result;
}

uint32_t fastSum(uint32_t num, uint32_t max)
{
  return num *  ((max/num) * ((max/num) + 1) / 2);
}

uint32_t fastComputeMultiples(uint16_t max)
{
  return (fastSum(3, max) + fastSum(5, max)) - fastSum(15, max);
}

int main()
{  
	uint32_t multiples(computeMultiples(1000));
	uint32_t fastmultiples(fastComputeMultiples(999));
	std::cout << "multiples of 3 and 5: " << multiples << std::endl;
	std::cout << "(fast) multiples of 3 and 5: " << fastmultiples << std::endl;

	return 0;
}
