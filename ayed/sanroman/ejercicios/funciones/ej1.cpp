#include <iostream>

using namespace std;

int comunDivisor(int a, int b);

int main()
{
  cout << comunDivisor(20, 16) << endl;
}

int comunDivisor(int a, int b)
{
  while (b != 0)
  {
    int num = b;
    b = a % b;
    a = num;
  }
  return a;
}
