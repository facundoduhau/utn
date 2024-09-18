#include <iostream>

using namespace std;

float porcentaje(int x, int y);

int main()
{
  cout << porcentaje(5, 20) << "%" << endl;
}

float porcentaje(int x, int y)
{
  float por;

  por = (float)(x * 100)/y;

  return por;
}
