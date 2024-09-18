#include <iostream>

using namespace std;

int main()
{
  int nota, notamax = 0, lista[5];
  bool flag = true;

  for (int i = 0; i < 5; i++)
  {
    if (flag)
    {
      cout << "Ingrese nota: ";
      cin >> nota;
      lista[i] = nota;
      notamax = nota;
      flag = false;
    }
    else if (!flag)
    { 
      cout << "Ingrese otra nota: ";
      cin >> nota;

      lista[i] = nota;

      if (nota > notamax)
      {
        notamax = nota; 
      }
    }
  }
  cout << "La máxima nota fue: " << notamax << endl;
}
