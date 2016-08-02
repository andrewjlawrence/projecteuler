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
	for (int i = 1; i < 100; i++)
	{
		if (i % )
	}
	
	return accumulate(nums.begin(), nums.end(), 0);
}


int main()
{  
	uint32_t multiples(computeMultiples(1000));

	std::cout << "multiples of 5: " << multiples << std::endl;
	std::cout << "multiples of 3: " << multiples << std::endl;
	std::cout << "multiples of 3 and 5: " << (multiplesof3 + multiplesof5) << std::endl;

	return 0;
}
