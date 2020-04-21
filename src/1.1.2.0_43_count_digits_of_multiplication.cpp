#include <vector>
#include <cmath>

namespace Algo
{
  unsigned int count_digits_of_multiplication(std::vector<int> nums)
  {
    if(nums.empty())
    {
      return 0;
    }

    double res = 1;
    for(size_t i = 0; i < nums.size(); i++)
    {
      res += std::log10(nums[i]);
    }
    return std::floor(res);
  }
}