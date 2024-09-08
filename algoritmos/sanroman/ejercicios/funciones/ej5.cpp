#include <iostream>

using namespace std;

long long factorial(int x);

long long combinatoria(int m, int n);

int main()
{
  cout << combinatoria(7, 3) << endl;
}

long long factorial(int x)
{
  long long fact = 1;

  for (long long i = 1; i <= x; i++)
  {
    fact *= i;
  }
  return fact;
}

long long combinatoria(int m, int n)
{
  long long comb;
  
  comb = factorial(m)/(factorial(m-n) * factorial(n));

  return comb;
}
