#include <iostream>

using namespace std;

int main()
{
  int max, nomax, num;
  bool flag = true, flag2 = true;


  for (int i = 0; i < 3; i++)
  {
    if (flag && flag2)
    {
      cout << "Ingrese un num: ";
      cin >> max;
      flag = false;
    }
    else if (!flag && flag2)
    {
      cout << "Ingrese otro num: ";
      cin >> num;
      flag2 = false;

      if (num > max)
      {
        nomax = max;
        max = num;
      }
      else
    {
        nomax = num;
      }
    }
    else if (!flag && !flag2)
    {
      cout << "Ingrese el 3er num: ";
      cin >> num;

      if (num > nomax && num < max)
      {
        nomax = num;
      }
      else if (num > max)
      {
        nomax = max;
        max = num;
      }

    }
  }
  cout << "Numero mayor: " << max << endl << "2do mayor: " << nomax << endl;
}
