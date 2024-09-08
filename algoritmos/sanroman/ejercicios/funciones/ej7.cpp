#include <iostream>

using namespace std;

unsigned edadAGrupoEtario(int x);

int main()
{
  cout << edadAGrupoEtario(50) << endl;
}

unsigned edadAGrupoEtario(int x)
{
  int valor;

  if (x <= 14)
  {
    valor = 1;
  }
  else if (x >= 15 && x <= 21)
  {
    valor = 2;
  }
  else if (x >= 22 && x <= 28)
  {
    valor = 3;
  }
  else if (x >= 29 && x <= 35)
  {
    valor = 4;
  }
  else if (x >= 36 && x <= 42)
  {
    valor = 5;
  }
  else if (x >= 43 && x <= 49)
  {
    valor = 6;
  }
  else if (x >= 50 && x <= 63)
  {
    valor = 7;
  }
  else if (x >= 64)
  {
    valor = 8;
  }

  return valor;
}
