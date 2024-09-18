#include <iostream>

using namespace std;

int factorial (int x);

void multiplo (int x, int &mult3, int &mult5, int &mult3y5);

int main()
{
  int x;
  int mult3 = 0, mult5 = 0, mult3y5 = 0;
  while(true)
  {
    cout << "Ingrese un num: ";
    cin >> x;
    if(x == 0){break;}

    cout << factorial(x) << endl;
    multiplo(x, mult3, mult5, mult3y5);
  }
    cout << "Cantidad de multiplos de 3: " << mult3 << endl << "Cantidad de multiplos de 5: " << mult5 << endl << "Cantidad de multiplos de 3 y 5: " << mult3y5 << endl;
}

int factorial (int x)
{
  int fact = 1;

  for (int i = 1; i <= x; i++)
  {
    fact *= i;
  }
  return fact;
}

void multiplo (int x, int &mult3, int &mult5, int &mult3y5)
{

  if (x % 3 == 0)
  {
    mult3 ++;
  }
  if (x % 5 == 0)
  {
    mult5 ++;
  }
  if (x % 3 == 0 && x % 5 == 0)
  {
    mult3y5 ++;
  }
}
