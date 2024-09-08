#include <iostream>

using namespace std;

int producto = 1;

int elevado(int a, int n);

int main()
{
  cout << elevado(3, 3) << endl;
}

int elevado(int a, int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    producto *= a;

    elevado(a, n - 1);

    return producto;
  }
}
