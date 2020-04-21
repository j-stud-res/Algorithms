#include <cmath>

namespace Algo
{
  bool is_prime(unsigned long long num)
  {
    if(num == 1 || num == 0) return false;
    
    if(num == 2) return true;

    if(num % 2 == 0) return false;

    unsigned long long end = (unsigned long long) std::floor(std::sqrt(num));

    if(num % end == 0) return false;

    for(unsigned long long i = 3; i < end; i+= 2) if(num % i == 0) return false;

    return true;
  }
}