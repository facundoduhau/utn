#include <iostream>

using namespace std;

long fecha(int x, int y, int z);

int main()
{
  cout << fecha(4, 8, 2003) << endl;
}

long fecha(int x, int y, int z)
{
  long entero = (x + (y * 100) + (z * 10000));

  return entero;
}
