#include <iostream>

using namespace std;
int suma = 0;

int producto(int a, int b);

int main()
{
  cout << producto(4, 3) << endl;
}

int producto(int a, int b)
{
  if (b == 0)
  {
    return suma;
  }
  else
  {
    suma += a;
    producto(4, b-1);
    return suma;
  }
}
