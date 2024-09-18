#include <iostream>

using namespace std;

long sumaHoras(long horaInicial, long adicional);

int main()
{
  cout << "La suma de las horas devuelve: " << sumaHoras(120000, 120000) << endl;
}

long sumaHoras(long horaInicial, long adicional)
{
  long suma;

  suma = horaInicial + adicional;

  if (suma > 240000)
  {
    suma = (suma - 240000);
  }

  return suma;
}
