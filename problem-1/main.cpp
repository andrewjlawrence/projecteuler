/* Code Kata No. 2 Karate Chop */

#include <vector>
#include <iterator>
#include <iostream>

using std::vector;
using std::distance;
using std::advance;

static int chop(int target, const vector<int>& arrayofints)
{
  int result(-1);

  auto begin = arrayofints.begin();
  auto end = arrayofints.end();
  while (begin != end)
  {
      auto dist = distance(begin,end) / 2;
      auto middle = begin;
      advance(middle,dist);
      if (*middle == target)
	return distance(arrayofints.begin(), middle);
      else if (*middle < target)
	begin = middle;
      else
	end = middle;
  }
      
  return result;
}

int main()
{
  std::cout << "chop 3 1,2,3,4,5: " << chop(3, {1,2,3,4,5}) << std::endl;
  std::cout << "chop 5 1,2,3,4,5: " << chop(5, {1,2,3,4,5}) << std::endl;
  std::cout << "chop 1 1,2,3,4,5: " << chop(1, {1,2,3,4,5}) << std::endl;
  
  return 0;
}
