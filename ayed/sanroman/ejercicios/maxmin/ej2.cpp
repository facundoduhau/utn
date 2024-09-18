#include <iostream>

using namespace std;

int main()

{
  int num, max, pos, i;
  bool flag = true;
  for (i = 1; i <= 3; i++)
  {
    if(flag)
    {
      cout << "Ingrese número: ";
      cin >> max;
      pos = i;
      flag = false;
    }
    else
  { 
      cout << "Ingrese otro número: ";
      cin >> num;
      if (num > max)
      {
        max = num;
        pos = i;
      }
    }
  }
  cout << "La posición del mayor número es: " << pos << endl;
}
