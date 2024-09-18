#include <iostream>

using namespace std;

bool multiplo(int x, int y);

int main()
{
  cout << multiplo(4, 2) << endl;
  cout << multiplo (2, 4) << endl;
}

bool multiplo(int x, int y)
{
  if (x % y == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
