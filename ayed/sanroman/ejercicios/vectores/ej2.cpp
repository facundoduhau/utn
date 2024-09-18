#include <iostream>

using namespace std;

int main()
{
  int lista[5], num, n, i;

  for (int i = 0; i < 5; i++)
  {
    cout << "Ingrese número: ";
    cin >> num;

    lista[i] = num;
  }

  cout << "La lista, invertida, es: ";

  for (int n = 4; n >=0; n--)
  {
    cout << lista[n];
  }
  cout << endl;
}
